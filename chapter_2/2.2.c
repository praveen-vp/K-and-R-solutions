
/*  Ranges of char, short, int, and long
variables, both signed and unsigned */

#include<stdio.h>
#include<string.h>
#include<limits.h>

main()
{
	printf("Max length int : %d \n",INT_MAX);	
	printf("min int %d\n",INT_MIN);
	
	printf("char bit: %d\n",CHAR_BIT);
	//printf("char max: %d\",CHAR_MAX);
	printf("char min: %d\n ",CHAR_MIN);
	printf("Long max: %s\n",LONG_MAX);
	printf("Long min: %s\n",LONG_MIN);
	printf("Schar max: %d\n",SCHAR_MAX);

}


