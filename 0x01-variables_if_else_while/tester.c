#include <stdio.h>
#include <stdbool.h>
/* more headers goes there */

/**
 * main - This is the main function, FUCK BETTY!!!!!!!!
 *
 * Return: This is bullshit
 */
int main(void)
{

    int number = 59;
    int comb2 = 0;
    int remainder;

    /*while (number != 0){
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }*/

    for (int i = number; i != 0; i /= 10) {
        remainder = i % 10;
        comb2 = comb2 * 10 + remainder;
    }

    printf("%d", comb2);

    return (0);
}
