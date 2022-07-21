#include "main.h"

/**
 * get_bit - So fuck it all tonight
 * @n: And don't ask me to shut up.
 * @index: When you know you talk too much.
 *
 * Return: But you don't got shit to say.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (n == 0 && index < 64)
return (0);

for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1);
}
}

return (-1);
}
