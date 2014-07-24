
//--- commandline argument test program

#include <stdio.h>

int main(int argc,char *argv[])
{
  printf("program name : %s\n",argv[0]);
  if(argc > 2 )
	printf("too many arguments\n");
  else if(argc == 2)
  	printf("the argument passed is %s\n",argv[1]);
  else 
	printf("one argument expected\n");

}

