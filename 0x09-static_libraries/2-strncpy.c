#include "main.h"
#include <string.h>

/**
 * _strncpy - These are not the droids your looking for
 * @dest: These are not the droids we're looking for
 * @src: Move along
 * @n: Move along, Move along
 *
 * Return: THIS. IS. SPARTA!!!!!!!
 */

char *_strncpy(char *dest, char *src, int n)
{

char *returnValue = strncpy(dest, src, n);

return (returnValue);

}
