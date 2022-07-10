#include <stdio.h>

/**
 * main - Betty is a dick
 *
 * Return: NOTHING. ABSOLUTELY NOTHING
 */
int main(void)
{
int firstCounter, secondCounter;

secondCounter = 48;

while (secondCounter < 58)
{
firstCounter = 48;
while (firstCounter < 58)
{
if (secondCounter != firstCounter && secondCounter < firstCounter)
{
putchar(secondCounter);
putchar(firstCounter);
if (firstCounter == 57 && secondCounter == 56)
{
break;
}
putchar(',');
putchar(' ');
}
firstCounter++;
}
secondCounter++;
}
putchar('\n');
return (0);
}
