
					/* reverse printing  */

#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];
int len;
int etline(char line[], int maxline);
void reverse(void);

main()
{
	int max;
	char longest[MAXLINE];
	max = 0;
	
	while ((len = etline(line, MAXLINE)) > 0)
		
		if (len > 0){
		max = len;
		reverse();
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

void reverse(void)
{
	extern int len;
	extern char line[];
	char temp;
	int i=len;
	
	printf("%d",len);	
	//line[len+1]='\0';
	
	while(i!=0){
		putchar(line[i]);
		i--;
	}

}




















