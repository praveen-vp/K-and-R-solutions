
#include <stdio.h>
#include <ctype.h>

// getword : get next word or charecter from input

void ungetch(int);
int getword(char *word,int lim)
{
	   int c,d;
	   int comment(void);
	   int getch(void);
	   //void ungetch(int);
	   char *w = word;

	   while(isspace(c = getch()) && c != '\n')
			 ;
	   if(c != EOF)
			 *w++ = c;
	   if(isalpha(c) || c == '_' || c == '#'){
			 for(; --lim > 0; w++)
				    if(!isalnum(*w = getch()) && *w != '_'){
						  ungetch(*w);
						  break;
				    }
	   }
	   else if(c == '\'' || c == '"'){
			 for(; --lim > 0;w++)
				    if((*w = getch()) == '\\')
						  *++w = getch();
				    else if(*w == c){
						  w++;
						  break;
				    }
				    else if( *w == EOF)
						  break;
	   }

	   else if(c =='/')
			 if((d = getch()) == '*')
				    c = comment();
			 else
				    ungetch(d);
	   *w = '\0';
	   return c;
}

// comment : skip over comment and return a chracter 

int comment (void)
{
	   int c = 0;
	   while((c = getch()) != EOF)
			 if(c == '*')
				    if((c = getch()) == '/')
						  break;
				    else 
						  ungetch(c);
	   return c;	

}
