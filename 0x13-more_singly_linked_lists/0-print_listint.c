#include "lists.h"

/**
 * print_listint - And who are you.
 * @h: The proud lord said.
 *
 * Return: That I must bow so low.
 */
size_t print_listint(const listint_t *h)
{
size_t nnodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nnodes++;
}
return (nnodes);
}
