#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - prints largest prime factor
 *
 * @num: num to find
 *
 *
*/
void largest_prime_factor(long int num)
{
	int  primn, largest;

	while (num % 2 == 0)
		num /= 2;

	for (primn = 3; primn <= (int) sqrt(612852475143); primn += 2)
	{
		while (num % primn == 0)
		{
			num /= primn;
			largest = primn;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
