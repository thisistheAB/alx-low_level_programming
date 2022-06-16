#include "main.h"
#include <string.h>

/**
 * reverse_array - This function reverses an array... NOOO SHIIIT
 * @a: Did you bring the cavalry?
 * @n: Woman. I AM the cavalry.
 *
 * Return: Familia
 */

void reverse_array(int *a, int n)
{

int reversedString[n];
int indexCounter = 0;
int reversedIndexCounter = n - 1;

while (indexCounter < n)
{
reversedString[indexCounter] = a[reversedIndexCounter];
indexCounter++;
reversedIndexCounter--;
}

indexCounter = 0;

while (indexCounter < n)
{
a[indexCounter] = reversedString[indexCounter];
indexCounter++;
}

}
