#include "main.h"

/**
 * _pow_recursion - Pew di PIE
 * @x: Alla fiera dell'est
 * @y: Per due soldi
 *
 * Return: Mi son comprato un.... non ricordo il resto...
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}

return (_pow_recursion(x, y - 1) * x);

}
