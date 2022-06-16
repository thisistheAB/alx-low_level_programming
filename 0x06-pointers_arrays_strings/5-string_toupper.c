#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - We need a plan of attack
 * @iString: I have a plan, Attack
 *
 * Return: There's only one God ma'am,
 * and I'm pretty sure he doesn't dress like that
 */

char *string_toupper(char *iString)
{

char upperString[900] = {0};
int indexCounter = 0;
long int inputLength = (long int) strlen(iString);
char tempChar;

while (indexCounter < inputLength)
{
tempChar = iString[indexCounter];
tempChar = toupper(tempChar);
upperString[indexCounter] = tempChar;
indexCounter++;
}

char *upperPointer = strncpy(iString, upperString, inputLength);

return (upperPointer);

}
