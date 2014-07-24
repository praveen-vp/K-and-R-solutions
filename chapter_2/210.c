

/******************  2.10 lower to upper ******************/

#include<stdio.h>


/* lower: convert c to lower case; ASCII only */

int lower(int c)
{
	return c = ( c >='A' && c<='Z' ) ? ( c+ 'a' - 'A' ) : c ;
}

main()
{
	printf("%c\n",lower('G'));

}
