
#include <stdio.h>
#include <stdarg.h>

// minprintf: minimal printf with variable arguments
void minprintf(char *fmt, ...)
{
	va_list ap;	// points to each unnamed arg in turn 
	char c,*p,*sval;
	int ival;
	double dval;

	va_start(ap,fmt);	// make ap point to listunnamed arg 

	for(p = fmt;*p;p++) {
		if(*p != '%') {
			putchar(*p);
			continue;
		}
		switch (*++p) {
			case 'd' :
				ival = va_arg(ap,int);
				printf("%d",ival);
				break;
			case 'f' :
				dval = va_arg(ap,double);
				printf("%f",dval);
				break;
			case 's' :
				for(sval = va_arg(ap,char*); *sval; sval++)
					putchar(*sval);
				break;
			case 'c' :
				c = (char)va_arg(ap,int);
				printf("%c",c);
				break;
			default :
				putchar (*p);
				break;
		}
	}
	va_end(ap);	// clean up when done
}
		
int main()
{
	int i = 35;
	char p[10] = "pravee";
	printf("%c\n",i);
	minprintf("%c\n",i);
	minprintf("%d\n",i);
	minprintf("%s\n",p);
}
