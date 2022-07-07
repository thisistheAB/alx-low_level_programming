#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - This is some shait
 * @str: Fun environment
 *
 * Return: Also hopelessly useless
 */
char *_strdup(char *str)
{

char *result;

if (str == NULL)
{
return (NULL);
}

result = strdup(str);
return (result);

}
