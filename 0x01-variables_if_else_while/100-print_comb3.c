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

    for (int i = 0; i < 100; i++) {

        if (number > 9){

            pos1 = number/10;
            pos2 = number%10;

            comb2 = 0;
            int remainder;
            for (int j = number; j != 0; j /= 10) {
                remainder = j % 10;
                comb2 = comb2 * 10 + remainder;
            }

            bool isRepetition = pos2 != 0;
            bool isSmallestCombination = comb2 > number;

            if (isRepetition && isSmallestCombination) {
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

    }

    return (0);
}
