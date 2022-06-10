#include "main.h"

/**
 * print_most_numbers - This is the main function, FUCK BETTY!!!!!!!!
 *
 * Return: This is bullshit
 */
void print_most_numbers(void)
{

int counter = 0;

while (counter <= 9)
{

if (counter != 2 && counter != 4)
{
_putchar(counter + '0');
}

counter++;
}

_putchar('\n');

}
