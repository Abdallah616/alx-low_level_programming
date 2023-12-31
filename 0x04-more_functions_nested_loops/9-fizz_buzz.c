#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C Program that prints numbers from 1 to 100
 *		numbers that are mulitiples of 3 print Fizz
 *		numbers that are mulitiples of 5 print Buzz
 *		numbers that are mulitiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz");
		else if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
