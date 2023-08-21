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
	// Set the seed for the random number generator.
	srand(time(NULL));
	// Generate a random password.
	char password[16];
	for (int i = 0; i < 16; i++)
	{
		password[i] = (char) (rand() % 26 + 'a');
	}

	return (0);
}

