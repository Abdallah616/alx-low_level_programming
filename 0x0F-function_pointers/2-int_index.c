#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array: array of int to serch in.
 * @size: size of array.
 * @cmp: function pointer.
 *
 * Return: the integer index if found.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr = 0;

	if (array && size && cmp)
	{
		while (itr < size)
		{
			if (cmp(array[itr]))
				return (itr);
			itr++;
		}
	}
	return (-1);
}
