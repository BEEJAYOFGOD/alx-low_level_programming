#include "main.h"

/**
* _puts - prints out  a string literal
* @str: string
*/

void _puts(char *str)
{
	int n;

	while (str[n] != '\0')
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
