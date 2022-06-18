#include "main.h"
#include <ctype.h>
#include <string.h>

char evaluateChar(char defaultValue);

/**
 * leet - This is the leet function, LEEEEEEEET
 * @inputString: Music & Lights, I sing and dance to you all night
 *
 * Return: Oh and... FUCK BEETTTYYYY
 */

char *leet(char *inputString)
{

char leetString[900];
char *leetPointer;

long int inputLength = (long int) strlen(inputString);
int inputIndex = 0;

char evaluationChar;

while (inputIndex < inputLength)
{

evaluationChar = inputString[inputIndex];

leetString[inputIndex] = evaluateChar(evaluationChar);
inputIndex++;

}

leetPointer = strncpy(inputString, leetString, inputLength);

return (leetPointer);

}

/**
 * evaluateChar - This is a ridiculous style of code
 * @defaultValue: Absolutely DIRTYYYY
 *
 * Return: FUCK BEETTTYYYY
 */

char evaluateChar(char defaultValue)
{

char finishedValue = defaultValue;

char replacementChars[] = {'a', 'e', 'o', 't', 'l'};
char replacingNumbers[] = {'4', '3', '0', '7', '1'};

int replacementLength = 5;
int replacementIndex = 0;

char replacementChar;
char capReplacementChar;

while (replacementIndex < replacementLength)
{

replacementChar = replacementChars[replacementIndex];
capReplacementChar = toupper(replacementChar);

if ((defaultValue == replacementChar) ||
(defaultValue == capReplacementChar))
{

finishedValue = replacingNumbers[replacementIndex];

}

replacementIndex++;

}

return (finishedValue);

}
