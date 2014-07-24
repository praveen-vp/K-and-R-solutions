/* Exercise 5-10. Write the program expr,which evaluates a 
reverse Polish expression from the command line, where each 
operator or operand is a separate argument.For example , 
expr " 2 3 4 + * " evaluates 2 * (3+4). */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'

void ungets(char []);
int getop(char []);
void push(double);
double pop(void);

int main(int argc, char *argv[])
{
/*	int a,b,c;
		c = atoi(argv[3]);
		b = atoi(argv[2]);
		a = atoi(argv[1]);
		printf("%d\n",a);
		printf("%d\n",a + b + c)
*/

char s[MAXOP];
double op2;

	while(--argc > 0){
		ungets(" ");
		ungets(*++argv);

		switch(getop(s)){
			case NUMBER :
				push(atof(s));
				break;
			case '+' : 
				push(pop() + pop());
				break;
			case '*' :
				push(pop() * pop());
				break;
			case '-' :
				op2 = pop();
				push(pop() - pop());
				break;
			case '/' :
				op2 = pop();
				if(op2 != 0.0)
					push(pop()/op2);
				else 
					printf("error : zero divisor");
				break;
			default :
				printf("error : unknwn command");
				argc = 1;
				break;	
		}
	}	
	printf("\t%.8g\n",pop());
	return 0;
}
