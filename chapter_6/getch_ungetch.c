////	getop functions with getch() and ungetch() 	********/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 100
#define NUMBER '0'
char buf[BUFSIZE];	 	/* buffer for ungetch */
int bufp = 0;			/* next free position in buf */
									
/*********************		functions		  *************/

int getch(void) 			/* get a (possibly pushed-back) character */
{
	   	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)		/* push character back on input */
{
	   	if (bufp >= BUFSIZE)
			   		printf("ungetch: too many characters\n");
			else

			   		buf[bufp++] = c;
}

