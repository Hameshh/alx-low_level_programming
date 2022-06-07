#include "main.h"

/**
 * pring_alphabet - prints the alphabet in lowercase a-z.
 * Description: prints lowercase alphabet
 * Return: void
 */
void print alphabet(void)
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
