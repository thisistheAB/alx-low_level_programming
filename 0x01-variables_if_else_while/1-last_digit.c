#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main (void){

    int n;
    int nLastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */

    nLastDigit = n % 10;

    printf("Last digit of %d is %d ", n, nLastDigit);

    if (nLastDigit > 5) printf("and is greater than 5");
    else if (nLastDigit == 0) printf("and is 0");
    else if (nLastDigit != 0 && nLastDigit < 6) printf("and is less than 6 and not 0");

    return (0);
}