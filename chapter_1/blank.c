#include<stdio.h>

#define b ' '

main()
{
	int c,n;
	while((c=getchar())!= EOF){
	
		if(c== ' '){
			
			putchar(b);
			l: c=n;
			c=getchar();
			
			if(c==' ')
			goto l;	
			
			else{	
			putchar(n);
			}
		}
	
	putchar(c);
	
	}

}
