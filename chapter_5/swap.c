#include <stdio.h>

void swap(int *px, int *py)
{
	int temp;
	/* interchange *px and *py */
	temp = *px;
	*px = *py;
	*py = temp;
}
