#include <stdio.h>

/**
 * main - If I could save time in a bottle, THERE'S A FUCKING LIMIT
 *
 * Return: Is to save every day till eternity passes away, FUCK BETTY
 */
int main(void)
{
int firstCounter = 48, secondCounter, thirdCounter, fourthCounter, firstParameter, secondParameter;
while (firstCounter < 58)
{
secondCounter = 48;
while (secondCounter < 58)
{
thirdCounter = 48;
while (thirdCounter < 58)
{
fourthCounter = 48;
while (fourthCounter < 58)
{
firstParameter = (firstCounter * 10) + secondCounter;
secondParameter = (thirdCounter * 10) + fourthCounter;
if (firstParameter < secondParameter)
{
putchar(firstCounter);
putchar(secondCounter);
putchar(' ');
putchar(thirdCounter);
putchar(fourthCounter);
if (firstCounter == 57 && secondCounter == 56
&& thirdCounter == 57 && fourthCounter == 57)
{
break;
}
putchar(',');
putchar(' ');
}
fourthCounter++;
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
