#include <stdio.h>

int max(char sum[])
{
	int k=0;
	for(i=1;sum[i]!='\0';i++){
		if(sum[i-1]>=sum[i]){
			sum[i]=sum[i-1];
			k=sum[i];
			//printf("%d\t",sum[i]);
			}
	}
	return k;	
}
