# include <stdio.h>


/**
* main - print the alphabets in lowercase
* Return: Always 0  (Success)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
