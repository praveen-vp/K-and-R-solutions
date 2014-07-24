
// determine given position is a tab position or not
// also determines error checking by checking the pos
// is in the bound 

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100
#define YES 1

int tabpos(int pos,char *tab)
{
	if(pos > MAXLINE )
		return YES;
	else
		return (tab[pos]);
}
