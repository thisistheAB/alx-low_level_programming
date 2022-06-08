#include "main.h"

void print_alphabet(void)
{

char *output = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(output[i]);
i++;
}

_putchar('\n');
}