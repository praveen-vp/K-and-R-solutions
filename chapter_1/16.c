	
	/* count number of lines in the input */


#include <stdio.h>


#define max 80
/* count lines in input */

main()
{
	int c,i,len,j,nl,p=0;
	char lo;
	char print[200000];
	char cc[200000];
	nl = 0;
	len=0;
	i=0;j=0;
	while ( (c = getchar()) != EOF ){
		
		if(c != '\n'){
		cc[i]=c;
		i++;
		}
		
		if(c=='\n'){
			cc[i]='\n';
			i++;
			cc[i]='\0';

			if(i > 20){
				
				for(j=p,i=0;cc[j] !='\0';j++,i++){
					print[j]=cc[i];
					p=j;
				}
				i=0;
			}
			
		}
	}

	printf("%s",print);
		

}









