
					/* split lines */

#include <stdio.h>
#define MAXLINE 1000

int etline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len,i;
	int max;
	char line[MAXLINE];

	max = 0;
	
	while ((len = etline(line, MAXLINE)) > 0)
		
		if (len > 20){
		max = len/2;
		max=max-2;
			while(1){	
	
				if(line[max]==' '|| line[max]=='\t' || line[max]==','){
					line[max]='\n';
					goto l;
				}
				max++;
			}
		}	

l:	printf("%s",line);
		
}
	
int etline(char s[],int lim)

{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	s[i] = c;
	
	if (c == '\n'){
	s[i] = c;
	++i;
	}
	
	s[i] = '\0';
	return i;
		
}

















