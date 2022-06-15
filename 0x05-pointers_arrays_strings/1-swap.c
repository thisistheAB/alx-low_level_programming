#include "main.h"
#include <stdio.h>

/**
 * swap - Nothing
 * @a: Nothing
 * @b: Nothing
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{

int outputA = *a;
int outputB = *b;

*a = outputB;
*b = outputA;

}