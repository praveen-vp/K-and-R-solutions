
/******************* Temperature convertion *************************************/


#include <stdio.h>

main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;
fahr = lower;

printf("Temperature conversion\n");

printf("\ffarenheet \t \t celsious\n");
while (fahr <= upper) 
{
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f \t\t\t%6.1f\n", fahr, celsius);
fahr = fahr + step;
}
}
