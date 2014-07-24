/******************* celsious to farenheet ************************/

#include <stdio.h>

main()
{

	float celsious,fahr,step=20,upper=200;

	// celsious to farenheet

	celsious = 0;
	printf("\ftemperature convertion \n");
	printf("celsious\t\tfarenheet\n");

	while(celsious<=upper) {

	 f128ahr=((9*celsious)/5)+32;

	 printf("%6.2f\t\t\t%6.2f\t \n ",celsious,fahr);

	 celsious=celsious+20;
	}

}
