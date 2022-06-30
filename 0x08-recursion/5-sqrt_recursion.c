#include "main.h"

int squareLoop(int iNumber, int iCheck);

/**
 * _sqrt_recursion - Kisab z'koneley
 * @n: Kisab z'semreley
 *
 * Return: Wikyanos'yu akley
 */

int _sqrt_recursion(int n)
{

return (squareLoop(n, 0));

}

/**
 * squareLoop - Fishikta Ameley
 * @iNumber: Y't'am
 * @iCheck: Y'hsem
 *
 * Return: Fishikta Ameley
 */

int squareLoop(int iNumber, int iCheck)
{
if (iCheck * iCheck == iNumber)
{
return (iCheck);
}
if (iCheck >= iNumber)
{
return (-1);
}

return (squareLoop(iNumber, iCheck + 1));

}
