#include "main.h"
#include <string.h>

void print_recursively(int size, char *iString);

/**
 * _print_rev_recursion - This shit again
 * @s: betty... you're a piece of shit
 *
 * Return: NOTHING. ABSOLUTELY FUCKING NOTHING
 */

void _print_rev_recursion(char *s)
{

int inputLength = (int) strlen(s) - 1;

print_recursively(inputLength, s);

}

/**
 * print_recursively - this is a comment
 * @size: this is a stupid comment
 * @iString: this is a very stupid comment
 *
 * Return: IT. IS. A. FUCKING. VOIIIIIIDDDDDDD
 */

void print_recursively(int size, char *iString)
{
if (size < 0)
{
return;
}
_putchar(iString[size]);
print_recursively(size - 1, iString);
}
