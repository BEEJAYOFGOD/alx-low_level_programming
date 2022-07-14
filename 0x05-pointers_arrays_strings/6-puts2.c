#include "main.h"

/**
 * puts2 - print every other character of a string
 * @s: string to be reversed
 */

void puts2(char *str)
{
	int sec = 0;

	while (str[sec] != '\0')
	{
		_putchar(str[sec]);
		sec += 2;
	}
	_putchar('\n');
}
