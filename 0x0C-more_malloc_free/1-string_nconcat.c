#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - And I wanna kiss you make you feel alright
 * @s1: I'm just so tired to share my nights
 * @s2: I wanna cry and I wanna love
 * @n: But all my tears have been used up
 *
 * Return: On another love
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int resultLength;
char *resultString;
unsigned int firstStringLength;
unsigned int secondStringLength;
unsigned int indexCounter = 0;

if (s1 == NULL)
        s1 = "";

if (s2 == NULL)
        s2 = "";

firstStringLength = strlen(s1);
secondStringLength = strlen(s2);

if (n > secondStringLength)
        n = secondStringLength;

resultLength = firstStringLength + n;
resultString = malloc(resultLength);
if (resultString == NULL)
        return (NULL);

while (indexCounter < resultLength)
{
if (indexCounter < firstStringLength)
        resultString[indexCounter] = s1[indexCounter];
else
        resultString[indexCounter] = s2[indexCounter - firstStringLength];

indexCounter++;
}
resultString[indexCounter] = '\0';

return (resultString);
}
