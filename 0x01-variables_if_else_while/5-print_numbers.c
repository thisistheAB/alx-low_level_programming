#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    int num = 0;

    while (num < 10) {
        printf("%d", num);
        num++;
    }

    putchar('\n');

    return (0);
}