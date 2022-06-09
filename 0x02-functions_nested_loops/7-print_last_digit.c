#include "main.h"
#include <math.h>

/**
 * print_last_digit - This is the main function, FUCK BETTY!!!!!!!!
 *@iNumber: THE ONE THING I TRULY HATE IN THIS WORLD IS BETTY!!!!
 *
 * Return: This is bullshit
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;

if (lastDigit == -4)
{
_putchar('4');
return (4);
}
else
{
_putchar('0' + lastDigit);
return (lastDigit);
}

}
