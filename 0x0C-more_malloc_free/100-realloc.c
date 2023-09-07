#include "main.h"
/**
 * *_realloc -  function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously allocated with a
 *		call to malloc: malloc(old_size).
 *
 * @old_size: size in bytes, of the allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return: NULL if new_size = 0 and ptr is not NULL.
 *		If new_size == old_size return ptr
 *		If ptr is NULL, return poiner pt allocated with malloc(new_size)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	if (new_size > old_size)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pt + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pt);
}
