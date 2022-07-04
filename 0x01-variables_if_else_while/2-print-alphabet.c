# include <stdio.h>


/**
* main - print the alphabets in lowercase
* Return : 0 Always (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
