#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    int num = 0;

    while (num < 10) {
        putchar(num+'0');

        if (num != 9) {
            putchar(',');
            putchar(' ');
        }

        num++;
    }

    return (0);
}