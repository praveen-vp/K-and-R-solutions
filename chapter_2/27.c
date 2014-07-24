
/************************************ invert *******************************/
#include<stdio.h>
#include<string.h>


int invert(unsigned int x,int p,int n) 

{
	int	i=~(~0<<8);  //255
	i=(i>>(8-n));
	i=(i<<(p-n));
	i=x^i;
	return i;

}


main()
{
	unsigned int x=8;
	int n=2;
	int p=3;
	printf("result :%d\n",invert(x,p,n));

}



















































