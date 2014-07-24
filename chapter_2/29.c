
#include <stdio.h>

/* bitcount: count 1 bits in x */

int bitcount(unsigned x)

{
	int b,y;
	for(b=0; x!= 0;b++ ){
		x= x & (x-1); 
	}
	return b;
}

main()
{
	 unsigned int x=14;
	 printf("%d\n",bitcount(x));
}











