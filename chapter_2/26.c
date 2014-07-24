
/************************************ replace bits *******************************/
#include<stdio.h>
#include<string.h>


int setbits(unsigned int x,unsigned int y,int p,int q) 

{
	y=(y<<(8-p));
	y=(y>>(8-q));
	x=x|y;
	return x;
}


main()
{
	unsigned int x=16,y=3;
	int n=2;
	int p=3;
//	i=~(~0<<8);  //255
	printf(" result :%d\n",setbits(x,y,n,p));
}

