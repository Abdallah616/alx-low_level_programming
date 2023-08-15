#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci sequence numbers
 *		starting with 1 and 2 followed by new line
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	unsigned long f1 = 0, f2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
