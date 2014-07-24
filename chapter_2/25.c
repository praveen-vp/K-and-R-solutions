
/***************************  squeezzzzzzzzzzzz*******************************/

#include<stdio.h>
#include<string.h>

void squeeze(char s[],char s1[])
{
	int i, j,k;
	
	for(j=0;s1[j]!='\0';j++){
	
		for (i = k = 0; s[i] != '\0'; i++){

			if (s[i] != s1[j])
			
				s[k++] = s[i];
			
		}
		
		s[k] = '\0';
	}
	printf("%s \n",s);
}

main()
{
	char p[]="abvdkjgjkjui";
	char q[]="asdfgdefe";	
	
	printf("%s\n%s\n",p,q);
	squeeze(p,q);
	
}
