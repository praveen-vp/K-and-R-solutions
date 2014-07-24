
/********************** sub string function *****************/

#include <stdio.h>

int substring(char s1[],char s2[])
{
	int i,j;
	for(i=0;s1[i];i++){
		for(j=0;s2[j];j++){
			if(s1[i+j] != s2[j])
			break;
		}
		
		if(!s2[j])
			return i; //// return frst index 
			
	}
	 
	 return -1;    //// return -1 since the string is not a sub string
}
