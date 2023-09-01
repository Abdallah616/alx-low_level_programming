#include <stdio.h>
/**
 * main - prints all arguments it recives
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 if true non zero if false
*/
int main(int argc, char *argv[])
{
	int itr = 0;

	while (argc--)
	{
		printf("%s\n", argv[itr]);
		itr++;
	}
	return (0);
}
