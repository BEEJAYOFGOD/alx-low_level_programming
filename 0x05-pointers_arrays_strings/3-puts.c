#include "main.h"

/**
* _puts - prints out  a string literal
* @str: string
*/

void _puts(char *str)
{
	int n;

	for (n = 0; *str != '\0'; str++)
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
