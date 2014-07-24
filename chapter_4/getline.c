	
	
	#include<stdio.h>
	#include "calc.h"
	/* getline: get line into s, return length */

	int size;
	
	int etline(char s[], int lim)
	{
		int c, i;
		i = 0;
		while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
			s[i++] = c;

			if (c == '\n')
				s[i++] = c;

		s[i] = '\0';		
		//	reverse(s);
		size = i-1;
		 
		return i;
	}
