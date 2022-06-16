#include "main.h"
#include <ctype.h>
#include <string.h>

int checkChar(char inputChar);

/**
 * cap_string: I am...
 * @inputString: ... Inevitable
 *
 * Return: And I... Am... IRONMAN
 */

char *cap_string(char *inputString)
{

char capitalizedString[900];
char *capitalizedPointer;
long int inputLength = (long int) strlen(inputString);
int indexCounter = 0;
int capitalized = 0;
char tempChar;

while (indexCounter < inputLength)
{

tempChar = inputString[indexCounter];

if (checkChar(tempChar) == 0)
{
capitalized = 0;
}
else if (capitalized == 0)
{
tempChar = toupper(tempChar);
capitalized = 1;
}

capitalizedString[indexCounter] = tempChar;
indexCounter++;

}

capitalizedPointer = strncpy(inputString, capitalizedString, inputLength);

return (capitalizedPointer);

}

int checkChar(char inputChar)
{

if (inputChar == ' ') return (0);
if (inputChar == '\t') return (0);
if (inputChar == '\n') return (0);
if (inputChar == ',') return (0);
if (inputChar == ';') return (0);
if (inputChar == '.') return (0);
if (inputChar == '!') return (0);
if (inputChar == '?') return (0);
if (inputChar == '\"') return (0);
if (inputChar == '(') return (0);
if (inputChar == ')') return (0);
if (inputChar == '{') return (0);
if (inputChar == '}') return (0);

return (1);

}