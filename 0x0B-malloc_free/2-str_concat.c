#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - CONCATACITANITE
 * @s1: In every life we have some trouble
 * @s2: But when you worry you make it double
 *
 * Return: Don't Worry, Be Happy
 */
char *str_concat(char *s1, char *s2)
{

char *result;
unsigned int size = strlen(s1) + strlen(s2);
result = malloc(size);

strcat(result, s1);
strcat(result, s2);

return (result);

}
