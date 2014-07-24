
/***************************  squeezzzzzzzzzzzz  2*******************************/

#include<stdio.h>
#include<string.h>

int squeeze(char s[],char s1[])
{
	int i, j,k;
	
	for(j=0;s1[j]!='\0';j++)
		for (i = k = 0; s[i] != '\0'; i++)
			if (s[i] == s1[j])
	return i;
}

main()
{

	char p[]="bvdkjgjkjui";
	char q[]="asdfgdefe";	
	
	int o;
		
	printf("%s\n%s\n",p,q);
	o=squeeze(p,q);
	printf("%d\n",o+1);


	
}









