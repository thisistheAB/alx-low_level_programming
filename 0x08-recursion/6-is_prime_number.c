#include "main.h"

int checkPrime(int iNumber, int iChecker);

/**
 * is_prime_number - Zhaskuwo hize
 * @n: kemesgin'ye
 *
 * Return: Akli zelewo'yu lebam
 */

int is_prime_number(int n)
{

return (checkPrime(n, 2));

}

/**
 * is_prime_number - Babababababbam
 * @n: barararararam
 *
 * Return: dulululu lul ulu ludu udu
 */

int checkPrime(int iNumber, int iChecker)
{

if (iNumber == 1 || iNumber < 0)
{
return (0);
}

if (iChecker >= iNumber)
{
return (1);
}

if (iNumber % iChecker == 0)
{
return (0);
}

return (checkPrime(iNumber, iChecker + 1));

}
