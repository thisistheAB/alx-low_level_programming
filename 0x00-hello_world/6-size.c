#include <stdio.h>

/**
 * main - Entry point
 *
 * prints text
 *
 * Returns 0
 */
int main(void)
{

    char sChar;
    int sInt;
    long int sLongInt;
    long long int sLongLongInt;
    float sFloat;

    printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(sChar));
    printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(sInt));
    printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(sLongInt));
    printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(sLongLongInt));
    printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(sFloat));

    return (0);
}