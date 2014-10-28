
#include <stdio.h>

int main()
{
	int p = 999;

	char c[12] = "praveen_v.p";
	char d[12] ="rwaklkl";

	char test[25] = "%5d\n";
	
	printf(test,p);
	
	
	printf(":%10s:\n",c);
	printf(":%.10s:\n",c);
	printf(":%-10s:\n",c);
	printf(":%.15s:\n",c);
	printf(":%-15s:\n",c);
	printf(":%15.10s:\n",c);
	printf(":%-15.10s:\n",c);
	printf("%.*s\n",5,d);
}
