#include <stdio.h>
/* more headers goes there */

/**
 * main - This is the main function, FUCK BETTY!!!!!!!!
 *
 * Return: This is bullshit
 */
int main(void)
{

int num = 0;

while (num < 10)
{
putchar(num + '0');

if (num != 9)
{
putchar(',');
putchar(' ');
}

num++;

}

putchar('\n');

return (0);
}
