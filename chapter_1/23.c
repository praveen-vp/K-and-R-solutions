		
			/*           remove comments         */


#include <stdio.h>


main()
{
	int c,i=0;
	char s[2000];
	while((c=getchar())!=EOF){
		
		if(c=='/'){
		c=getchar();
			
			if(c=='/'){
			
				for(;(c=getchar())!='\n';)		
				if (c=='\n')
				goto l;
			}
			
			if(c=='*'){
				for(;(c=getchar())!='/';)
					c='\0';
					
				if((c=getchar())!='/')
					goto l;		
			
			}
		}
			
		if(c!='/'){
								
l:		s[i]=c;
		i++;	
		}
		
	}
	s[i]='\0';
	
	printf("%s",s);

}

