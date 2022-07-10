#include <stdio.h>

/**
*
*
*/

int main(void)

{
	int num;


	for (num=0; num<=9; num++)
	{
		if (num < 9)
		{
			putchar((num) + '0');
			putchar(',');
		}
		else
		{
			putchar((num) + '0');
			putchar("$\n");
		}

	}
	return (0);
}
