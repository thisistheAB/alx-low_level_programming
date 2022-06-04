#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    char * alphabet = "abcdefghijklmnopqrstuvwxyz";
    char * capsAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i = 0;
    int d = 0;
    while (i < 26){putchar(alphabet[i]);i++;}
    while (d < 26){putchar(capsAlphabet[d]);d++;}
    putchar('\n');

    return (0);
}