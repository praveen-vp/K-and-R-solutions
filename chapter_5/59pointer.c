

/* 5-9. Rewrite the routines day_of_year and month_day with pointers instead of indexing. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//--- array for leap year and non leap year minth details.
static char daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


//--- day_of_year: set day of year from month & day.
int day_of_year(int year, int month, int day)
{
        int i, leap;
	char *p;
        if(year < 1 || ( month > 12  || month < 1) || day < 1 || day > 31)
                return -1;
        else{
                leap = ( (year%4 == 0) && ( (year%100 != 0) || (year%400 == 0)));
                p = daytab[leap];
		while(--month)
		day += *++p;		
              return day;
        }
}

//---  month_day: set month, day from day of year */

void month_day(int year, int yearday, int *pmonth, int *pday)
{
        int i, leap;
	char *p;
	
        if(yearday > 0 && yearday <367){
                leap = ( (year%4 == 0) && (year%100 != 0) || (year%400 == 0));
		p = daytab[leap];
		while(yearday > *++p)
			yearday -= *p;
		*pmonth = p - *(daytab + leap);
		*pday = yearday;
        }
        else{
                *pmonth = -1;
                *pday = -1;
        }
}

int main()
{

printf("%d\n",day_of_year(2012,12,1));
int *pmonth,*pday;
int a,b;
pmonth = &a;
pday = &b;
month_day(2012,33,pmonth,pday);
printf("%d----%d---\n",a,b);


}

