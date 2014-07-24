
#include <stdio.h>
#include "calc.h"

#define MAXLINE 100

/* rudimentary calculator */

main()
{
	double sum,atof(char []);
//	double sum;
	char line[MAXLINE];
	int etline(char line[], int max);
	sum = 0;
	
	while (etline(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof(line));
	
	return 0;
}

