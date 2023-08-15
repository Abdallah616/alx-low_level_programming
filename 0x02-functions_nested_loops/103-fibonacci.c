#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued
 *		fibonacci sequence not exceed 4 million
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum, total_sum = 0;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%lu\n", total_sum);

	return (0);
}
