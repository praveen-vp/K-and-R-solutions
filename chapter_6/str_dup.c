
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *str_dup(char *s) {

				char *p;
				p = (char * )malloc(strlen(s)+1); //===> +1 for '\0'

				if(p != NULL)
								strcpy(p,s);
				return p;
}

