#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
*/
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
