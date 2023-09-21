#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct lists - singly listed list
 *
 * @str: malloc'ed string.
 * @len: length of string.
 * @next: points to next node.
 *
 * Description: singly linked list node structure.
*/
typedef struct lists
{
	char *str;
	unsigned int len;
	struct lists *next;
} list_t;

int _strlen(char *s);
size_t print_list(const list_t *h);

#endif
