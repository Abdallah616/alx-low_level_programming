#include "main.h"
/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: the main string to be scanned.
 * @needle: needle − This is the small string to be searched within
 *                      haystack string
 *
 * Return: the beginning of the located substring, or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack [i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
