#include <stdio.h>

/**
 * main - Prints a series of numbers with commas and spaces.
 * 
 * Return: Always 0 (Success);
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
