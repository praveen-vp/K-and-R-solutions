
					/* delete all blanks tabs and entire blank lines  */

#include <stdio.h>
#define MAXLINE 1000

char s[1000];
void etline(void);

main()
{
	etline();
	
}

	
void etline(void)

{
	extern char s[1000];
	int c, i;
	for (i=0; ((c=getchar()) != EOF ); ++i){
	
		if(c==' '){
			while(1){
			c=getchar();
				if(c!=' '){
					s[i]=' ';
					i++;
					goto l1;
					}
			}
		}

l1:		if (c=='\t'){
			while(1){
			c=getchar();
				if(c!='\t'){
					s[i]='\t';
					i++;
					goto l2;
					}
			}
		}
		
l2:		if (c=='\n'){
			while(1){
			c=getchar();
				if(c!='\n'){
					s[i]='\n';
					i++;
					goto l3;
					}
			}
		}
	
	
l3:		s[i]=c;
	
		
	}
	
	s[i]='\0';
	
	printf("%s \n",s);

}












