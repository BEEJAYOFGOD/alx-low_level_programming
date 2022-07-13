#include "main.h"

/**
* swap_int  - swap two ints
*/


void swap_int(int *a, int *b)
{
        int temp;

        temp = *a;
        a = *b;
        b = temp;
}
