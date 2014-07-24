#include <stdio.h>
/*  return the length of a string */
int pstrlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
