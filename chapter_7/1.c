
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int c;
	if(argc > 1)
	{
		if(strncmp(argv[1],"u",1) == 0)
			while((c=getchar()) != EOF)
				putchar(toupper(c));

		else if(strncmp(argv[1],"l",1) == 0) 
			while((c=getchar()) != EOF)
				putchar(tolower(c));
	} 
	else
		while((c=getchar()) != EOF)
			putchar(c);
	return 0;
}


