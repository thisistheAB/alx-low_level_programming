#include "main.h"

/*
 *
 */

void print_chessboard(char (*a)[8])
{

char currentChar;

int firstSubscriptCounter = 0;
int secondSubscriptCounter;

while (firstSubscriptCounter < 8)
{

secondSubscriptCounter = 0;
while (secondSubscriptCounter < 8)
{

currentChar = a[firstSubscriptCounter][secondSubscriptCounter];
_putchar(currentChar);
secondSubscriptCounter++;

}

_putchar('\n');
firstSubscriptCounter++;

}

}
