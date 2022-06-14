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

    int number = 1;

    int pos1;
    int pos2;

    int comb2;

    int remainder;

    int i = 0;
    while (i < 100) {

        if (number > 9){

            pos1 = number/10;
            pos2 = number%10;

            comb2 = 0;

            int j = number;

            while (j != 0) {
                remainder = j % 10;
                comb2 = comb2 * 10 + remainder;
                j /= 10;
            }

            if (pos2 != 0 && comb2 > number) {
                putchar(pos1 + '0');
                putchar(pos2 + '0');
                if (number != 89){
                    putchar(',');
                    putchar(' ');
                }
            }

        }else{
            putchar('0');
            putchar(number + '0');
            putchar(',');
            putchar(' ');
        }

        number++;
        i++;

    }

    return (0);
}
