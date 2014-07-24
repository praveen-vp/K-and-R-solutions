
	/************	right most occurrence of the sub string t  **************/
	
	#include <stdio.h>
	#include <string.h>
	
	char ptn[] = "ould";		/* pattern to search for */
	int size = 0;
	
	/* reverse: reverse string s in place */
	
	void reverse(char s[])
	{
		int c, i, j;
		for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		}
	}

	/* getline: get line into s, return length */
	
	int etline(char s[], int lim)
	{
		int c, i;
		i = 0;
		while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
			s[i++] = c;

			if (c == '\n')
				s[i++] = c;

		s[i] = '\0';		
		reverse(s);
		size = i-1;
		 
		return i;
	}
		
	/* strindex: return index of t in s, -1 if none */
	
	int strindex(char s[], char t[])
	{
     	int i, j, k;
		for (i = 0; s[i] != '\0'; i++) {
			for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
				;
				
		if (k > 0 && t[k] == '\0')
				
		return i;
		
		}
		return -1;
	}
	
		/***************** main function ******************/	
	
	main()
	{
		int i=1000;
		char s[i];
		int found;
		reverse(ptn);
		int ptns = strlen(ptn) - 1;
		while( etline(s,i) > 0 )
			if( (strindex(s,ptn) ) >=0)
			
		printf("%d\n",size-strindex(s,ptn) - ptns );
	}	
	
	
	
		
	
	
