#include <main.h>

/**
 * print_alphabet - prints alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char lw;

	lw = 'a';

	while (lw <= 'z')
	{
		_putchar(lw);
		ch++;
	}

	_putchar('\n');
}
