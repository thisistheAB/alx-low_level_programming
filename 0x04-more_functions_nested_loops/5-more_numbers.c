#include "main.h"

/**
 * more_numbers - This is the main function, FUCK BETTY!!!!!!!!
 *
 * Return: This is bullshit
 */
void more_numbers(void)
{

int timesCounter = 0;

while (timesCounter < 10)
{
int counter = 0;

while (counter <= 14)
{

if (counter >= 10)
{
_putchar((counter / 10) + '0');
_putchar((counter % 10) + '0');
}
else
{
_putchar(counter + '0');
}

counter++;
}

_putchar('\n');
timesCounter++;
}

_putchar('\n');

}
