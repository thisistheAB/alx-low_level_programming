#include "main.h"
#include <stdlib.h>

/**
 * argstostr - No matter how much you try
 * @ac: No matter how much you make an effort.
 * @av: You niggas can never ever.
 *
 * Return: really fuck with me
 */
char *argstostr(int ac, char **av)
{
char *aout;
int c, i, j, ia;
if (ac == 0)
return (NULL);

for (c = i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);

for (j = 0; av[i][j] != '\0'; j++)
c++;
c++;
}
aout = malloc((c + 1) * sizeof(char));
if (aout == NULL)
{
free(aout);
return (NULL);
}
for (i = j = ia = 0; ia < c; j++, ia++)
{
if (av[i][j] == '\0')
{
aout[ia] = '\n';
i++;
ia++;
j = 0;
}
if (ia < c - 1)
aout[ia] = av[i][j];
}
aout[ia] = '\0';
return (aout);
}
