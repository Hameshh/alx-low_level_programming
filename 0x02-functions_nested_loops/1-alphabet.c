#include "holberton.h"
#include "main.h"
/**
 * pring_alphabet - prints the alphabet in lowercase a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
