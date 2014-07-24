
		/*   print lines higher than 80 charecters   */


#include <stdio.h>
#define MAXLINE 10000

/* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
//int j=0;

main()
{
	int len;
	int max;

	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = get_line(line, MAXLINE)) > 0)

		if (len > max) {
		max = len;
		copy(longest, line);
		}

	if (max > 0) /* there was a line */
		printf("%s ",longest);
		//printf(" %d",max);
	else 
	
	return 0;
}

/* getline: read a line into s, return length*/

int get_line(char s[],int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	s[i] = c;
	
	if (c == '\n') {
	s[i] = c;
	++i;
	}
	
	s[i] = '\0';

	return i;
}
	
/* copy: copy 'from' into 'to'; assume to is big enough */
	
void copy(char to[], char from[])
{
	int j;
	j = 0;

	while ((to[j] = from[j]) != '\0')
	++j;
}











