#include "main.h"

/**
 * print_triangle - This is the main function, FUCK BETTY!!!!!!!!
 * @size: Fuck this shit
 *
 * Return: This is bullshit
 */
void print_triangle(int size)
{
if (size > 0)
{
int counter = 0, spaces = size - 1, spacesCounter, hashtagsCounter, hashtags = 1;
while (counter < size)
{
spacesCounter = 0;
while (spacesCounter < spaces)
{
_putchar(' ');
spacesCounter++;
}
hashtagsCounter = 0;
while (hashtagsCounter < hashtags)
{
_putchar('#');
hashtagsCounter++;
}
_putchar('\n');
spaces--;
hashtags++;
counter++;
}
}
else
{
_putchar('\n');
}
}
