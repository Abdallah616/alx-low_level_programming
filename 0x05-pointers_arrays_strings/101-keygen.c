#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: generates random passworm for 101-crackme
 *
 * Return: 0
*/
int main(void)
{
	srand(time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		char c = rand();

		putchar(c);
	}
	return (0);
}
