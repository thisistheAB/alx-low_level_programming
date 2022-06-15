#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string.... TFFF did I just do it right???
 * @c: This shit.... aaaand we're back to normal... phew
 *
 * Return: This language is outdated... just saying..
 */

void rev_string(char *s)
{
int inputLength = (int) strlen(s);
char copy[inputLength];

int firstCounter = 0;
while (firstCounter < inputLength)
{

copy[firstCounter] = s[firstCounter];
firstCounter++;

}

int reverseCounter = 0;
char letter;
int secondCounter = inputLength - 1;

while (secondCounter >= 0)
{

letter = copy[secondCounter];
s[reverseCounter] = letter;
secondCounter--;
reverseCounter++;

}


}
