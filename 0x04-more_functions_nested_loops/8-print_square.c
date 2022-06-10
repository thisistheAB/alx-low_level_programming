#include "main.h"

/**
 * print_square - This is the main function, FUCK BETTY!!!!!!!!
 * @size: Fuck this shit
 *
 * Return: This is bullshit
 */
void print_square(int size)
{

if (size > 0)
{
int heightCounter;
int widthCounter;

heightCounter = 0;
while (heightCounter < size)
{
widthCounter = 0;
while (widthCounter < size)
{
_putchar('#');
widthCounter++;
}
_putchar('\n');
heightCounter++;
}

}
else
{
_putchar('\n');
}

}
