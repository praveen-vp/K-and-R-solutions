
/******************* Temperature convertion By function 	*************************************/

#include <stdio.h>

int lower, upper=200, step=20,fahr, celsius;

void tem(void)
{
	fahr=celsius=0;
	while (fahr <= upper){
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%d \t\t%d \n", fahr, celsius);
	fahr = fahr + step;
	}
}


main()
{

printf("\ftemperature conversion table\n");
printf("farenheet \t celcious \n");
tem();

}



