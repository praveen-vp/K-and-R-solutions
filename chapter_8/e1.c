

#include <stdio.h>
#include <unistd.h>
int main()
{
	char buf[4096];
	int n;

	while((n = read(0,buf,4096)) > 0)
		write(1,buf,n);
	return 0;
}

