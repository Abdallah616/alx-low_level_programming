#include "main.h"
/**
 * times_table - prints 9 times table
*/
void times_table(void)
{
	int num1, num2, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num1 * num2;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
	_putchar('\n');
	}

}
