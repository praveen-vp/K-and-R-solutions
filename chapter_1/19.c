
							/*        string reverse  */

#include <stdio.h>
#include <string.h>


#define MAXLINE 1000 

int z;
char line[MAXLINE];
char longest[MAXLINE]; 


int etline(void);
void reverse(void);

main()
{

	extern int z;
	//extern int max;
	extern char longest[];

	z=etline();
	//reverse();
	strrev(line);
	printf("%d \t",z);
	printf("%s \n",line);

}

int etline(void)

{
	int c, i;

	extern char line[];

	for (i = 0; (i < MAXLINE - 1) && ( c=getchar() ) != EOF && ( c !='\n'); ++i){
		line[i] = c;
	}

	line[i] = '\0';
	return i;
	
}

void reverse(void)
{
	extern int z;
	extern char line[];
	int i;
	char temp;
	
	for(i=0;z<=0;z--,i++){
	
	temp=line[z];
	line[z]=line[i];
	line[i]=temp;
	
	}
	
}


