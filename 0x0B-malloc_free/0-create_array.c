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

char *resultArray;

if (size == 0)
{
return (NULL);
}

resultArray = malloc(size);

resultArray[0] = c;

return (resultArray);
}
