
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024

int main(int argc, char* argv[])
{
	char pattern[MAXLINE];
	FILE *fp;
	int c,except = 0, number = 0;

	void fpat(FILE *fp, char* fname, char *pattern,
			int except, int number);

	while(--argc > 0 && (*++argv)[0] == ' ')
		while(c = *++argv[0])
			switch(c) {
				case 'x' :
					except = 1;
					break;
				case 'n' :
					number = 1;
					break;
				default :
					printf("find : illegal option %c\n",c);
					argc = 0;
					break;
			}
	if(argc >= 1)
		strcpy(pattern, *argv);
	else {
		printf("usage: find [-x] [-n] pattern [file ...] \n");
		exit(1);
	}

	if(argc == 1)
		fpat(stdin,"",pattern,except,number);
	else 
		while(--argc > 0)
			if((fp = fopen(*++argv,"r")) == NULL) {
				fprintf(stderr,"find: can't open %s\n",*argv);
				exit(1);
			} else {
				fpat(fp, *argv, pattern, except, number);
				fclose(fp);
			}
	return 0;
}

// fpat 

void fpat(FILE *fp, char *fname, char *pattern, int except, int number)
{
	char line[MAXLINE];
	long lineno = 0;

	while(fgets(line, MAXLINE,fp) != NULL ) {
		++lineno;
		if((strstr(line,pattern) != NULL) != except) {
			if(*fname)
				printf("%s - ",fname);
			if(number)
				printf("%d\n",lineno);
			printf("%s",line);
		}
	}
}

