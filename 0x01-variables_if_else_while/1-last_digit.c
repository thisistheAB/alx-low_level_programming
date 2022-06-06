#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This is the main function, FUCK BETTY!!!!!!!!
 *
 * Return: This is bullshit
 */
int main(void)
{

int n;
int nLastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

nLastDigit = n % 10;

printf("Last digit of %d is %d ", n, nLastDigit);

if (nLastDigit > 5)
printf("and is greater than 5\n");
else if (nLastDigit == 0)
printf("and is 0\n");
else if (nLastDigit < 6)
printf("and is less than 6 and not 0\n");

return (0);
}
