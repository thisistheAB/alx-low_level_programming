#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Kisab z'koneley
 * @n: Kisab z'semreley
 *
 * Return: Wikyanos'yu akley
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

long long squareRoot = sqrt(n);

if (squareRoot * squareRoot == n)
{
return ((int) squareRoot);
}
else
{
return (-1);
}

}
