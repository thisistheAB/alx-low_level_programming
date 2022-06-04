#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    char * alphabet = "abcdefghijklmnopqrstuvwxyz";

    int i = 0;
    while (i < 26){
        if (alphabet[i] != 'q' && alphabet[i] != 'e') putchar(alphabet[i]);
        i++;
    }
    putchar('\n');

    return (0);
}