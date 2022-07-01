#include "main.h"
#include <stdio.h>

/**
 * print_array - I wanna da pizzad
 * @a: If I don't geta da pizza....
 * @n: ammana loooze it
 *
 * Return: in case you didn't notice.... IT'S A VOID!!!!
 */

void print_array(int *a, int n)
{

int indexCounter = 0;
int printNumber;

while (indexCounter < n)
{

printNumber = a[indexCounter];
printf("%d", printNumber);
indexCounter++;

if (indexCounter < n)
{
putchar(',');
putchar(' ');
}

}

printf("\n");

}
