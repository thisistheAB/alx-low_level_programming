#include "main.h"

/**
 * print_binary - All I do is complain
 * @n: She needs something to change.
 *
 * Return: Need to take of the edge.
 */
void print_binary(unsigned long int n)
{
if (n >> 0)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar('0');
}
}
