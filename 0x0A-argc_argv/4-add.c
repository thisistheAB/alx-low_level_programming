#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Deep down in Louisiana close to New Orleans
 * @argc: Way back up in the woods among the evergreens
 * @argv: There stood a large cabin made of earth and wood
 *
 * Return: Where lived a country boy named Johnny B. Goode
 */

int main(int argc, char *argv[])
{
int currentInt;
int digitCheck;
int additionResult = 0;
int argIndex = 0;

if (argc > 1)
{
while (argIndex < argc)
{
digitCheck = isdigit(atoi(argv[argIndex]));
if (digitCheck != 0)
{
currentInt = atoi(argv[argIndex]);
if (currentInt >= 0)
{
additionResult = additionResult + currentInt;
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
argIndex++;
}
printf("%d\n", additionResult);
}
else
{
printf("0");
}
return (0);
}
