#include <stdio.h>

/**
 * main - Prints a series of nums with commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

