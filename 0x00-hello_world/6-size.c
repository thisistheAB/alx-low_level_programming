#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{

char sChar;
int sInt;
long int sLongInt;
long long int sLongLongInt;
float sFloat;

printf
("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(sChar));
printf
("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(sInt));
printf
("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(sLongInt));
printf
("Size of a long long int: %lu byte(s)\n",
 (unsigned long)sizeof(sLongLongInt));
printf
("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(sFloat));

return (0);
}
