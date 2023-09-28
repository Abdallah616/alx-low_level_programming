#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 *		 to get from one number to another.
 * @n: first num.
 * @m: second num.
 *
 * Return: number of bits to flip to convert numbers.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_value = n ^ m;
	unsigned int count = 0;

	while (XOR_value)
	{
		if (XOR_value & 1ul)
			count++;
		XOR_value >>= 1;
	}
	return (count);
}
