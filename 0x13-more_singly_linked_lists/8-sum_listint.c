#include "lists.h"

/**
 * sum_listint - function tha return the sum of all the data
 * in a listint_t linked list
 * @head: first node in the listint_t linked list
 *
 * Return: if list is empty,return zero
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
