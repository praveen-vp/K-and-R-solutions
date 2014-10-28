
#include <stdio.h>
#include <unistd.h>

// getchar un buffered single charecter i/p

int get_char(void) 
{
	char c;

	return (read(0,&c,1) == 1) ? (unsigned char) c : EOF;
}

int main()
{
	int c;
	while((c = get_char()) != EOF )
		putchar(c);
}

