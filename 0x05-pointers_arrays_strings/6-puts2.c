#include "main.h"

/**
 * puts2 - print every other character of a string
 * @s: string to be reversed
 */

void puts2(char *str)
{
	int sec;
	int len = 0;

	while (str[sec] != '\0')
	{
		len++;
	}
	for (sec = 0; sec < len; sec++)
		_putchar(str[sec]);
	_putchar('\n');
}
