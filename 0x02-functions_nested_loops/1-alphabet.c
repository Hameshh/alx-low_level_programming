#include "main.h"

/**
 * pring_alphabet - prints the alphabet in lowercase a-z.
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
