#include "main.h"

/**
 * factorial - FAC. FUCKING. TORIALS.
 * @n: Tibeb
 *
 * Return: I wanna go to thaaaaaiiiilandddd
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));

}
