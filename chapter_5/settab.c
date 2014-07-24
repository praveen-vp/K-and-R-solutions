
// settab an array of the maximum size is created each position 
// corresponding to the each line number and the tabarray is marked 
// with weather the position is a tab space or not.
// arguments are passed as the positions and are assigned as tab space
// and all other space as default tab space
 
#include <stdlib.h>

#define MAXLINE 100
#define DEFTAB 8
#define YES 1
#define NO 0

void settab(int argc,char *argv[],char *tab)
{
	int pos,i;

	if(argc <= 1){ 					// no arguments and set all default tabs in size 8
		for(i = 0;i <= MAXLINE; i++){
			if( (i%DEFTAB) == 0){
				tab[i] = YES;
			}
		}
	}
	else{
		for(i = 0;i<=MAXLINE;i++)
			tab[i] = NO;			// turn off all tab positions
		while(--argc){				// read argments passed
			pos = atoi(*++argv);
			if((pos > 0) && (pos < MAXLINE)){
				tab[pos] = YES;
			}
			else 
				tab[pos] = NO;
		}
	}
}

