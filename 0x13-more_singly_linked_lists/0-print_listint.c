#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint list
 * @h: listint_t to print
 *
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
