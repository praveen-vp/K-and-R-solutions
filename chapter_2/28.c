
/************************************ right rotate *******************************/
#include<stdio.h>
#include<string.h>

/**************rightrotation******************/

unsigned rightrotate(unsigned int x,int n) 

{
	int	i=~(~0<<8);  //255
	unsigned int y=(x>>n);
	x=(x<<(4-n)) & (i>>=4);
	return (x|y);		
}

main()
{
	unsigned int x=10;
	int n=2;
	printf("result (hex) :%X\n",rightrotate(x,n));
	printf("result :%d\n",rightrotate(x,n));
}










