#include "main.h"
#include <stdio.h>

int forwardCounter(const int *iArray, int iArraySize);
int reverseCounter(const int *iArray, int iArraySize);

/**
 * print_diagsums - We don't believe you
 * @a: Cuz we the people
 * @size: All you black folks you must go
 *
 * Return: All you mexicans you must go
 */

void print_diagsums(int *a, int size)
{

printf("%d, %d\n", forwardCounter(a, size), reverseCounter(a, size));

}

/**
 * forwardCounter - We don't believe you
 * @iArray: Cuz we the people
 * @iArraySize: All you black folks you must go
 *
 * Return: All you mexicans you must go
 */

int forwardCounter(const int *iArray, int iArraySize)
{

int currentInt;

int indexCounter = 0;
int incrementalCounter = 0;
int sumCounter = 0;

while (indexCounter < iArraySize)
{

currentInt = iArray[incrementalCounter];
sumCounter = sumCounter + currentInt;
incrementalCounter += iArraySize + 1;
indexCounter++;

}

return (sumCounter);
}

/**
 * reverseCounter - We don't believe you
 * @iArray: Cuz we the people
 * @iArraySize: All you black folks you must go
 *
 * Return: All you mexicans you must go
 */

int reverseCounter(const int *iArray, int iArraySize)
{

int currentInt;

int indexCounter = 0;
int incrementalCounter = iArraySize - 1;
int sumCounter = 0;

while (indexCounter < iArraySize)
{

currentInt = iArray[incrementalCounter];
sumCounter = sumCounter + currentInt;
incrementalCounter += iArraySize - 1;
indexCounter++;

}

return (sumCounter);
}
