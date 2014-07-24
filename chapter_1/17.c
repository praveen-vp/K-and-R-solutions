
					/* print lines have characters 
						greater than 80 */

#include <stdio.h>
#define MAXLINE 1000

int etline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	
	while ((len = etline(line, MAXLINE)) > 0)
		
		if (len >20){
		max = len;
		copy(longest, line);
		S
		printf("%s", longest);
		}
		
	if (max > 0) 
	
	return 0;
}
	
int etline(char s[],int lim)

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
	
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	++i;
}






