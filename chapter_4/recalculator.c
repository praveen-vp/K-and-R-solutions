#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
/////int getop(char []);
#define MAXVAL 100 /* maximum depth of val stack */
int sp = 0;	/* next free stack position */
double val[MAXVAL];	/* value stack */
#include "getop.c"

//////////////////////////////////////////////////////////////////////////////

void push(double f)/* push: push f onto value stack */
{
	if (sp < MAXVAL)
	val[sp++] = f;
	else
	printf("error: stack full, can't push %g\n", f);
}

/********** pop: pop and return top value from stack ****************/

double pop(void)
{
	if (sp > 0)
	return val[--sp];

	else {
	printf("error: stack empty\n");
	return 0.0;
	}
}

/************* reverse Polish calculator MAIN *******************/

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
			push(atof(s));
			break;

			case '+':
			push(pop() + pop());
			break;

			case '*':
			push(pop() * pop());
			break;

			case '-':
			op2 = pop();
			push(pop() - op2);
			break;

			case '/':
			op2 = pop();
			if (op2 != 0.0)
			push(pop() / op2);
			else
			printf("error: zero divisor\n");
			break;

			case '\n':
			printf("\t%.8g\n", pop());
			break;

			default:
			printf("error: unknown command %s\n", s);
			break;
		}
	}
	return 0;
}
