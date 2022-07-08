#include "main.h"

/**
* main - print 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
	int alp, count;

	for (count = 0; count <= 9; count++)
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar(\n);

		
}
