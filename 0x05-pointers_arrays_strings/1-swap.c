#include "main.h"

/**
* swap_int  - swap two ints
* a - a pointer to second value
* b - a pointer to second value
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a  = *b;
	*b  = temp;
}
