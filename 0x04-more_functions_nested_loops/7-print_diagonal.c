#include "main.h"

/**
 * print_diagonal - This is the main function, FUCK BETTY!!!!!!!!
 * @c: Fuck this shit
 *
 * Return: This is bullshit
 */
void print_diagonal(int c)
{

int counter = 0;
int spaceCounter;

if (c > 0)
{
while (counter < c)
{

spaceCounter = 0;
while (spaceCounter < counter)
{
_putchar(' ');
spaceCounter++;
}
_putchar('\\');

_putchar('\n');
counter++;
}

}
else
{
_putchar('\n');
}

}
