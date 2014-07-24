								
								
								/* histogram  */

#include <stdio.h>

main()

{

	int c,d=1;

	while( (c=getchar() ) != EOF ){
	
		if(c==' '|| c=='\t' || c=='\n' || c==',' ){   	

		printf(" word %d",d);
		++d;	
		c='\n';
		}
		
		
		else
		c='*';

	putchar(c);
		
	}

}
