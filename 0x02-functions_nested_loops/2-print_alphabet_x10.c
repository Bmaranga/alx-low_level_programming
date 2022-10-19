#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char lw;
	int ten;

	ten = 0;

	while (ten < 10)
	{
		lw = 'a';
		while (lw <= 'z')
		{
			_putchar(lw);
			lw++;
		}
		_putchar('\n');
		ten++;
	}
}
