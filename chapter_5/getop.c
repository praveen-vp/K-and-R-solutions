
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

/************* getop: get next character or numeric operand **********/

int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	
	if (!isdigit(c) && c != '.' && c != '-')
	return c;
	/* not a number */
	i = 0;
	
	if (c == '-'){
		if(isdigit( c = getch()) || c == '.')
			s[++i] = c;

		else{
			if(c != EOF)
				ungetch(c);
		
			return '-';		
		}						
	}
	
	if (isdigit(c))
	/* collect integer part */
	
	while (isdigit(s[++i] = c = getch()))
		;
	if (c == '.')
		/* collect fraction part */
	
	while (isdigit(s[++i] = c = getch()))
		;
	s[i] = '\0';
	
	if (c != EOF)
		ungetch(c);

return NUMBER;
}
