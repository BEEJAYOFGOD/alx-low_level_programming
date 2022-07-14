#include "main.h"

/**
 * puts2 - print every other character of a string
 * @s: string to be reversed
 */

void puts2(char *str)
{
	int sec;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (sec = 0; sec < len; sec += 2)
		_putchar(str[sec]);
	_putchar('\n');
}
