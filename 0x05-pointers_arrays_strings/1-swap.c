#include "main.h"

/**
* swap_int  - swap two ints
* @*a - the value of a pointer to a
* @*b - value of a pointer to b
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a  = *b;
	*b  = temp;
}
