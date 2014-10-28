
#include <stdlib.h>
#include <stdio.h>

// cat : concatenate files 

int main(int argc, char* argv[])
{
	FILE *fp;
	void filecopy(FILE*,FILE*);

	if(argc == 1) // no args ; copy standars input
		filecopy(stdin, stdout);
	else {
	   while(--argc > 0) {
			if((fp = fopen(*++argv,"r")) == NULL ){
				printf("cat: can't open %s\n",*argv);
				//return 1;
				//exit(1);
				break;
			}
			else {
				filecopy(fp,stdout);
				fclose(fp);
			}
		return 0;
	   }
	}
}

// filecopy : copy file ifp to file ofp

void filecopy (FILE *ifp, FILE *ofp)
{
	int c;
	while((c = getc(ifp)) != EOF )
		putc(c,ofp);
}

