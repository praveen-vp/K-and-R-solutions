#include <stdio.h>

main()
{
	char c=0;
	int i=0,p,q,r=0;
	char a[127],co[127];
	int b[127];
		
		while( (c=getchar() ) != EOF ){

			a[i]=c;
			i++;	
		
			if(c=='\n'){
			a[i]='\0';
			break;
			}	
			p=i;	
		}
		
		while(a[i]!='\0'){
		co[i]=a[i];
		
		}
		co[i]='\0';
		printf("%s\n",a);
		for(i=0;i!=p;i++){
			for(q=0,r=0;q!=p;q++){
			
				if(a[i]!='\0'){
					c=a[i];
					if(c==a[q]){
					r++;
					b[i]=r;
					a[q]='\0';
					}
				}
				
			}
		}	
			
			
		for(i=0;i!=p;i++){

			printf("%d \n ",b[i]);
		}
			printf("%s",a);

}













