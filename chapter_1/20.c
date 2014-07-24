
					/* detab */

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
	int c, i=0;
	extern char s[1000];
l1:	for (;(c=getchar())!=EOF ;i++){
	
		if(c!='\t'){
		
			s[i]=c;
			
		}

		if (c=='\t'){
			
			s[i]=' ';
			i++;
			while(1){
			c=getchar();
				if(c!='\t'){
					s[i]=c;
					i++;
					goto l1;
					}
				if(c==EOF)
					goto l;	
			}
		}

	}


l:	s[i]='\0';	
	printf("%s",s);	

}


