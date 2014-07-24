				
		/*	Write a function escape(s,t) that converts characters like newline 
		and tab into visible escape sequences like \n and \t as it copies the 
		string t to s. Use a switch. Write a function for the other direction as
		well, converting escape sequences into the real characters 	*/
			 
#include <stdio.h>
#include <string.h>

#define e '\\'

void escape(char s[],char t[])
{
	int i=0;
	
	while(t[i] != '\0'){

		switch( t[i] ){	
		
		case '\n' :
			s[i]= e;		
			i++;
			s[i]= 'n';
			i++;
			break;			
			
		case '\t' :
			s[i] = e;
			i++;
			s[i]= 't';
			i++;		
			break;	

		default :	
			s[i]= t[i];
			i++;	
		break;
		}
		
	}
	s[i]='\0';
	
	printf("%s\n",s);
}

main()
{
	int i=0;
	char t[500];
	char s[500];
	char c;
	while((c = getchar() ) != EOF){
		t[i]=c;
		i++;
	//escape(s,t);
	}
	t[i]='\0';
	escape(s,t);
}


