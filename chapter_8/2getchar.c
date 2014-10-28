
#include <unistd.h>
#include <stdio.h>

/* getchar: simple buffered version */
int get_char(void)
{
	static char buf[BUFSIZ];
	static char *bufp = buf;
	static int n = 0;

	if (n == 0) { /* buffer is empty */
		n = read(0, buf, sizeof buf);
		bufp = buf;
	}

	return (--n >= 0) ? (unsigned char) *bufp++ : EOF;
}

int main()
{
	int c;
	while((c = get_char()) != EOF )
		putchar(c);
}

