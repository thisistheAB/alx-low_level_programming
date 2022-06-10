#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

int counter = 1;

while (counter <= 100)
{
if ((counter % 3) == 0 || (counter % 5) == 0)
{
if ((counter % 3) == 0)
{
printf("Fizz");
}
if ((counter % 5) == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", counter);
}

printf(" ");
counter++;

}

putchar('\n');

return (0);
}
