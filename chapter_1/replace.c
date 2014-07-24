

/* replace the tab by \t and back space by  \b and \ by \\ */

#include <stdio.h>

#define b '\\'

main()
{

int c,d;

	while( (c=getchar() ) != EOF ){

			
		if(c== '\t'){
		putchar(b);
		putchar('t');
		}
		else if(c=='\b'){
		putchar(b);
		putchar('b');
		}
		else if(c=='\\'){
		putchar(b);
		putchar('\\');
		}
		else

		putchar(c);
	
	

	}

}
