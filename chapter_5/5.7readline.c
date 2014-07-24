#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1000
#define MAXSTORE  5000
int readlines(char *lineptr[],char *linestore,int maxlines)
{
	int len ,nlines;
	char line[MAXLEN];
	char *p = linestore;
	char *linestop = linestore + MAXSTORE;
	nlines = 0;
	
	while ((len = pgetline(line,MAXLEN)) > 0 )
		if((nlines >= maxlines) || ( (p+len) > linestop) )
			return -1;
		else{
			line[len - 1] = '\0';	/*delete new line */
			strcpy(p, line);
			lineptr(nlines++) = p;
			p+=len;
		}
	return nlines;

}



