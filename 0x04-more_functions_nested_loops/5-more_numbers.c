#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 (10 times)
 *
 * Return: Always 0 (Success)
 *
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
