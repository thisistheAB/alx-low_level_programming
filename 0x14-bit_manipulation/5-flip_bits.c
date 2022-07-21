#include "main.h"

/**
 * flip_bits - We're both acting insane
 * @n: But to stubborn to change.
 * @m: Now I'm drinking again.
 *
 * Return: Hand and proof in my vains.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;

for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}

return (nbits);
}
