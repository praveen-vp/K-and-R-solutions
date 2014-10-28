
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c;
	int i = 0;
	while ((c=getchar()) != EOF && c != '\n') {
		i++;
		if(i > 10) {
			printf("\n");
			i = 0;
		}
		if(iscntrl(c))
			printf("%x",c);
		else 
			putchar(c);
	}	
	printf("\n");
}

