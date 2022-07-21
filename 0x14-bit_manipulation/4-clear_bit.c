#include "main.h"

/**
 * clear_bit - So you needed this heart and you got it.
 * @n: Turns out that it wasn't what you wanted.
 * @index: Now you backed out and you lost it.
 *
 * Return: And I'm a goner.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;

if (*n & m)
*n ^= m;

return (1);
}
