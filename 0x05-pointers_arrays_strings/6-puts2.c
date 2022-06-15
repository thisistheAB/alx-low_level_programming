#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - I officially HATE C
 * @str: This language is so old Jesus used it
 *
 * Return: No wonder he couldn't fix the buoyancy bug
 */

void puts2(char *str)
{

int inputLength = (int) strlen(str);
int indexCounter = 0;

while (indexCounter < inputLength)
{

if (indexCounter % 2 == 0)
{
printf("%c", str[indexCounter]);
}

indexCounter++;
}

}
