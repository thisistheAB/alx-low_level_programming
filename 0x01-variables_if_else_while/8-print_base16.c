#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    char * alphabet = "0123456789abcdef";

    int i = 0;
    while (i < 16){putchar(alphabet[i]);i++;}
    putchar('\n');

    return (0);
}