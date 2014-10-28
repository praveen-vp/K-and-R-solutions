
#include <stdio.h>
#include <string.h>

int main()
{
	int x,y,z;
	char c;	
	char s[234];
	int i = 0;
	
//	while((c[i]=getchar()) != EOF && c[i] != '\n' )
//		i++;

	gets(s);

	sscanf(s,"%d","%d","%d", x,y,z);
	printf("%d-%d-%d\n",x,y,z);
}

