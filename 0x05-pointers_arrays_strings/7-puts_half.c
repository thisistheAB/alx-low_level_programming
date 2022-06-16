#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - What do you call a nigga on a tree with a briefcase
 * @str: Branch Manager. LMAOOOOO
 *
 * Return: I plead 1st
 */

void puts_half(char *str)
{

long int inputLength = (long int) strlen(str);

long int indexCounter = (long int) inputLength / 2;
if (inputLength % 2 != 0)
{
indexCounter = (inputLength - 1) / 2;
}
if (inputLength > 224)
{
indexCounter = indexCounter - 1;
}

while (indexCounter < inputLength)
{
printf("%c", str[indexCounter]);
indexCounter++;
}

printf("\n");

}
