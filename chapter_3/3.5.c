				
   /******************	base convertion of numbers  ************************/

#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itob(int n,char s[],int b)
{
	int i=0;char h=0;
	
	do{
		h =n%b;		/*	s[i++] = (h>=9) ? h+'0' : h+'a'-10; 		*/	
		if(h>=9)
			s[i++]= h+'a'-10;
		else	
			s[i++]=h+'0';
			
	}while((n/=b) !=0);
	
	s[i]='\0';
	reverse(s);
}

main()
{
	int i,n=14,b=2;
	char s[20];
	itob(n,s,b);
	printf("%s\n",s);	

}




