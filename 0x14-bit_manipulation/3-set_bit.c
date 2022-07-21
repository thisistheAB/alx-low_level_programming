#include "main.h"

/**
 * set_bit - I want you out of my head.
 * @n: I want you out of my bedroom tonight.
 * @index: There's no way I can save you.
 *
 * Return: Cause I need to be saved too.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;
*n = (*n | m);

return (1);
}
