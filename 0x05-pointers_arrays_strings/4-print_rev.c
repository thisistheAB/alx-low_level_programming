#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Null pointer exception
 * @s: Understand the secrets of 369 you will have the keys to the universe
 *
 * Return: The forgotten Genius
 */

void print_rev(const char *s)
{

int inputLength = (int) strlen(s);

while (inputLength >= 0)
{

putchar(s[inputLength]);
putchar('\n');
inputLength--;

}

}
