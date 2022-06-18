#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * leet - This is the leet function, LEEEEEEEET
 * @inputString: Music & Lights, I sing and dance to you all night
 *
 * Return: Oh and... FUCK BEETTTYYYY
 */

char *leet(char *inputString)
{

char replacementChars[] = {'a', 'e', 'o', 't', 'l'};
char replacingNumbers[] = {'4', '3', '0', '7', '1'};
char returnString[900];
char *returnPointer;

long int inputLength = (long int) strlen(inputString);
int replacementLength = 5;
int inputIndex = 0;
int replacementIndex = 0;

char evaluationChar;
char replacementChar;
char capReplacementChar;

while (inputIndex < inputLength)
{

evaluationChar = inputString[inputIndex];

replacementIndex = 0;
while (replacementIndex < replacementLength)
{

replacementChar = replacementChars[replacementIndex];
capReplacementChar = toupper(replacementChar);

if ((evaluationChar == replacementChar) ||
(evaluationChar == capReplacementChar))
{

evaluationChar = replacingNumbers[replacementIndex];

}

replacementIndex++;

}

returnString[inputIndex] = evaluationChar;
inputIndex++;

}

returnPointer = strncpy(inputString, returnString, inputLength);

return (returnPointer);

}
