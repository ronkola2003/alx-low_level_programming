#include "lists.h"

/**
 * get_nodeint_at_index - functions that returns the nth node
 * of a in a lstint_t list
 * @head: first node in the listint_t list
 * @index: index of node to return
 *
 * Return: if node does not  exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
