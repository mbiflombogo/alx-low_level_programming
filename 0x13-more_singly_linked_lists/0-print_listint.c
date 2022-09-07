#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *copy = h;

while (copy != NULL)
{
printf("%d\n", h->n);
copy = copy->next;
count++;
}
return (count);
}
