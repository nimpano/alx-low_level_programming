#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * elt_list_t: element of list_t
 * Return: the number of nodes printed
 */
unsigned int  print_list(const list_t *h)
{
	unsigned int elt_list_t = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	elt_list_t++;
	}
	return (elt_list_t);
}

