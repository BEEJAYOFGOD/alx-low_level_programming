#include <stdio.h>

/**
* main - print all the numbers of base 16  in lowercase
*
* Return: Always 0 (Successful)
*/

int main(void)
{
	int var;
	char var1;

	for (var = '0'; var <= '9'; var++)
	{
		putchar((var % 10) + '0');
	}
	for (var1 = 'a'; var1 <= 'f'; var1++)
	{
		putchar(var1);
	}
	putchar('\n');
	return (0);
}
