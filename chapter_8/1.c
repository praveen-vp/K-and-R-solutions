

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 10000

int main(int argc, char* argv[])
{
	int fd,wd;
	char buf[SIZE];

	if(argc <= 1)
		printf("usage: cat [file name]\n");
	else {

		fd = open(*++argv,O_RDONLY,0);
		wd = read(fd,buf,SIZE);
		write(1,buf,wd);
		close(fd);
	}
	printf("\n");
}	

