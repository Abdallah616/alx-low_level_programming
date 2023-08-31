#include <stdio.h>
/**
 * main - print num of args passed
 *
 * @argc: The first of these is a count of the arguments supplied
 *				to the program
 * @argv: pointer to  an array of command line arguments
 *
 * Return: 0 if success, non zero if false
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
