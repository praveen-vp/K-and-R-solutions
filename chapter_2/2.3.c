
		/*hex to integer 0123....9,abc...f*/


#include<stdio.h>
#include<math.h>
#include<string.h>

int i=0;
int htos(char a[]);

main()
{
	
	char c,s[]="000000000000";
	int e;
	while( (c=getchar()) != EOF ){
				
		s[i]=c;
		i++;	

	}
	
	s[i]='\0';
	i--;	i--;
	e=htos(s);
	printf(" int : %d\n",e);	
	
}

int htos(char a[])
{
	extern int i;
	int j=0,d=0,b=0,p=0;
		
	while(a[j] != '\0'){
		
		
		if(a[j]=='a' || a[j] == 'A')
			p=10;
		else if (a[j]=='b' || a[j] == 'B')
			p=11;
		else if(a[j]=='c' || a[j] == 'C')
			p=12;
		else if (a[j]=='d' || a[j] == 'D')
			p=13;
		else if(a[j]=='e' || a[j] == 'E')	
			p=14;
		else if(a[j]=='f' || a[j] == 'F')
			p=15;
		else if(a[j]=='x'|| a[j]=='X')
			return b;

		else
			p=a[j]-'0';	
				
		b = (pow(16,i));
		b=(p) * b;
		b=b+d;
		d=b;
		j++;
		i--;
	}
	return d;
}






