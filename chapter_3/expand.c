	/*
	
	Write a function expand(s1,s2) that expands shorthand notations like a-z in 
	the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters
	of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 
	and -a-z. Arrange that a leading or trailing - is taken literally.
	
	*/

#include<stdio.h>
#include<string.h>

int main(){

	char s2[99];
	char s1[] = "sda-z2-5-";
	int c,i=0,k=0;
		
	if(s1[i]=='-'){
		while(s1[i]!='\0'){
			s1[i++]=s1[i+1];
			//i++;
		}	
	}
	i=0;
	
	while(s1[i] != '\0'){
		
			c=s1[i];
			s2[k]=s1[i];
			i++;

			if(s1[i]=='-'){
				i++;
					
				while(c!=s1[i]){	
					s2[k++] = c++;	
					}
				
				s2[k]=s1[--i];	
			}
			
			else
				s2[k++]=s1[i++];
		}
		
		s2[k]='\0';
		printf("%s\n",s2);


return 0;

}







