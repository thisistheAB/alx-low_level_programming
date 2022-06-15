#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - What do you call a nigga on a tree with a suitcase
 * @str: Branch Manager. LMAOOOOO
 *
 * Return: I plead 1st
 */

void puts_half(char *str)
{

int inputLength = (int) strlen(str);

int indexCounter = (int) inputLength/2;
if (inputLength % 2 != 0)
{
indexCounter = (inputLength - 1) / 2;
}

while (indexCounter < inputLength)
{
printf("%c", str[indexCounter]);
indexCounter++;
}

printf("\n");

}
