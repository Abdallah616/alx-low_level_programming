#include <stdio.h>
/**
 * isprintable - checks if the char is printable in ASCII
 * @n: integer
 * Return: num of char in ASCII code
*/
int isprintable(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printhex - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
*/
void printhex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + i + start));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - print ASCII values for a string b.
 * formatted to replace nonprintable char with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
*/
void printASCII(char *b, int start, int end)
{
	int i = 0;
	char ch;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintable(ch))
			ch = '.';
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - print a buffer
 * @b: string to print
 * @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			if (size - start < 10)
				end = size - start;
			else
				end = 10;
			printf("%08x: ", start);
			printhex(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
