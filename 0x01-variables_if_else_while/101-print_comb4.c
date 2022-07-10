#include <stdio.h>

/**
 * main - Betty, I will find you, and I will kill you
 *
 * Return: What a pain in the arse
 */
int main(void)
{
int firstCounter;
int secondCounter;
int thirdCounter;

firstCounter = 48;
while (firstCounter < 58)
{
secondCounter = 48;
while (secondCounter < 58)
{
thirdCounter = 48;
while (thirdCounter < 58)
{
if (firstCounter != secondCounter &&
firstCounter != thirdCounter &&
secondCounter != thirdCounter &&
firstCounter < secondCounter && secondCounter < thirdCounter)
{
putchar(firstCounter);
putchar(secondCounter);
putchar(thirdCounter);
if (secondCounter == 56 && firstCounter == 55 && thirdCounter == 57)
{
break;
}
putchar(',');
putchar(' ');
}
thirdCounter++;
}
secondCounter++;
}
firstCounter++;
}
putchar('\n');
return (0);
}
