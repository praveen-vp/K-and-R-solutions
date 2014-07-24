
	#include <stdio.h> 
	#include <stdlib.h>
	#include "calc.h"	
	
	
/*******************		keep the order of c files  	********************/

	#include "getop1.c"
	#include "push.c"
	#include "pop.c"	
	
	double val[MAXVAL];		/* value stack */
	
/************************ 	MAIN FUNCTION	************************/

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
				
				case '%':
					op2 = pop();
					int op = pop();
					push ( op % 	(int) (op2));
					break;
				case 's':
					printf("working\n");
					break;
					
				default:
				printf("error: unknown command %s\n", s);
				break;
			}
		}
		return 0;
	}

/****************************		MAIN ENDS 		************************/

