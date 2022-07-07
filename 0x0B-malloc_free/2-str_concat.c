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
unsigned int size = strlen(s1) + strlen(s2) + 1;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

result = malloc(size);

if (result == NULL)
{
return (NULL);
}

strcat(result, s1);
strcat(result, s2);

return (result);

}
