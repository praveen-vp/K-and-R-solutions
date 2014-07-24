//   Exercise 5-11. Modify the program entab and detab 
//(written as exercises in Chapter 1) to accept a list
//  of tab stops as arguments. Use the default tab 
//  settings if there are no arguments

//a.out 4

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define TAB 8
#define MAXSIZE 1000
#define tabb '\\'

int tabstop[25];
void set_tab(char *argv[]);
void detab(char *s);

int main(int argc,char *argv[])
{
//	int tab = 0; printf("%d\n",atoi(argv[1]));
	int i=0;
//	for(;i<25;i++)
//		tabstop[i] = atoi(argv[1]) * i;
//	printf("%d\n",tabstop[0]);

	char c=0;
	char s[MAXSIZE];
	char sc[MAXSIZE];
	detab(s);
	printf("%s\n",s);
}

// detab ---------> replace the tab with fixed number of spaces
void detab(char *s)
{	
	char c;
	while((c = getchar())!= EOF){
		if(c == '\t'){
			*s++ = tabb;
			*s++ = 't';
		}
		else 
			*s++ = c;
	}
}


