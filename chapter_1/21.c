
					/* entab */

#include <stdio.h>
#define MAXLINE 1000

char s[1000];
void detab(void);

main()
{
	detab();
}
	
void detab(void)

{
	int c, i=0,t=0;
	extern char s[1000];
l1:	for (;(c=getchar())!=EOF ;i++){
	
		if(c!=' '){
		
			s[i]=c;
			
		}

		if (c==' '){
			
			s[i]='\t';
			i++;t++;
			while(1){
			c=getchar();
				if(c!=' '){
					s[i]=c;
					i++;
					goto l1;
					}
				if(c==EOF)
					goto l;
				
				if(c==' '){
					t++;
					if(t==4){
					s[i]='\t';
					t=0;
					goto l1;
					}	
				}
						
			}
		}

	}


l:	s[i]='\0';	
	printf("%s",s);	

}


