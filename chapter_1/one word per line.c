				
				/* one word per line */

#include <stdio.h>

main()
{

int c,d;
	while((c=getchar())!=EOF){

	if(c==' '|| c=='\t' || c== '\n' || c== '.'|| c==',')
	c='\n';
	
	putchar(c);
	}
}
