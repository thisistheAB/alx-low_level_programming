#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: FAT
 * @c: food
 *
 * Return: Boh
 */

char *create_array(unsigned int size, char c)
{

if (size == 0)
{
return (NULL);
}

char *resultArray;
resultArray = malloc(size);

if (resultArray == NULL)
{
return (NULL);
}

resultArray[0] = c;

return (resultArray);
}
