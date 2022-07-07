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
int size = sizeof(s1) + sizeof(s2);
result = malloc(sizeof(s1) + sizeof(s2));

strncat(result, s1, size);
strncat(result, s2, size);

return (result);

}
