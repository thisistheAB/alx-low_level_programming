#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int containsChars(char *iString);

/**
 * main - Deep down in Louisiana close to New Orleans
 * @argc: Way back up in the woods among the evergreens
 * @argv: There stood a large cabin made of earth and wood
 *
 * Return: Where lived a country boy named Johnny B. Goode
 */

int main(int argc, char *argv[])
{

int argIndex = 1;
int checkString;
int currentInt;
int argSum = 0;

if (argc > 1)
{

while (argIndex < argc)
{

checkString = containsChars(argv[argIndex]);

if (checkString == 0)
{
currentInt = atoi(argv[argIndex]);
if (currentInt > 0)
{
argSum = argSum + currentInt;
argIndex++;
}
else
{
printf("Error\n");
return (1);
}
}
else
{
printf("Error\n");
return (1);
}

}
printf("%d\n", argSum);
}
else
{
printf("0\n");
}
return (0);
}

int containsChars(char *iString)
{

int inputLength = sizeof(iString);
int inputIndex = 0;
char currentChar;

while (inputIndex < inputLength)
{

currentChar = iString[inputIndex];
if(isalpha(currentChar))
{
return (1);
}
else
{
inputIndex++;
}

}

return (0);

}
