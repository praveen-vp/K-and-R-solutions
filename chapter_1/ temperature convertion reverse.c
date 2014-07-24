
/*******************reverse  Temperature convertion *************************************/


#include <stdio.h>

main()
{
float  celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;
int fahr;


printf("Temperature conversion\n");

printf("\ffarenheet \t \t celsious\n");

for(fahr =300;fahr>=0;fahr = fahr - step)
{
celsius = (5.0/9.0) * (fahr-32.0);
printf("%d \t\t\t%6.1f\n", fahr, celsius);

}
}
