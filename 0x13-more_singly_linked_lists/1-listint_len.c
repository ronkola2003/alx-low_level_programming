#include "lists.h"

/**
 * listint_len - function of returns the number of elements
 * in a listint_t lists
 * @h: list of type listint_t to traverse
 *
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
