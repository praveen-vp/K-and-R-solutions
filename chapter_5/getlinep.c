#include <stdio.h>
/* read a line into s and return length */

int pgetline(char *s, int lim)
{
	int c = 0;
	char *t = s;
	while(--lim >0 && (c = getchar()) != EOF && c!= '\n')
		*s++ = c;
	if (c == '\n')
		*s++ = c;
	*s = '\0';
	return s -t ;

}
