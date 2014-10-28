
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

#define SIZE 1024

void minscanf(char *fmt, ...)
{
	va_list ap;
	char *p,*sval;
	int c,i,*ival;
	double *dval;
	unsigned *uval;
	char local[SIZE];
	
	i = 0;
	va_start(ap,fmt);

	for(p = fmt; *p;p++) {
		if(*p != '%') {
			local[i++] = *p;
			continue;
		}
	
		local[i++] = '%';
		
		while(*(p+1) && !isalpha(*(p+1)))
			local[i++] = *++p;
		
		local[i++] = *(p+1);
		local[i] = '\0';

		switch(*++p) {
			case 'd' :
			case 'i' :
				ival = va_arg(ap,int *);
				scanf(local,ival);
				break;
			case 'x' :
			case 'X' :
			case 'u' :
			case 'o' :
				uval = va_arg(ap,unsigned*);
				scanf(local,uval);
				break;
			case 'f' :
				dval = va_arg(ap,double*);
				scanf(local,dval);
				break;
			case 's' :
				sval = va_arg(ap,char*);
				scanf(local,sval);
				break;
			default :
				scanf(local);
				break;
		}

		i = 0;
	}
	
	va_end(ap);
}
	
int main()
{
	int i;
	char c;
	double d;
	unsigned u;

	printf("enter numbers i\n ");
	minscanf("%d",&i);
	printf("enter numbers d\n ");
	minscanf("%f",&d);
	printf("enter numbers u\n ");
	minscanf("%u",&u);

	return 0;
}


