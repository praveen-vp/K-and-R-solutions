
	/* an alternative version of squeeze(s1,s2) that deletes each character in
		s that matches any character in the string a	*/	

#include<stdio.h>
#include<string.h>

main()
{
	char a[]="asd";
	char s[]="saxw";
	char s1[11];
	int i,j=0;

	printf("%s\n%s\n",a,s);
	int k;

	for (i=0; s[i] != '\0'; i++){
	
		for(j=k=0;a[j]!='\0';j++){
	
			if(s[i]==a[j]){
			
				s[k++]=s[j];
				//s[i++]='0';
			}
		}
	}		
	printf("%s\n",s);

}



