#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - And you aint got to bring the special.
 * @grid: for this occasion.
 * @height: just grab anything from your closet and.
 *
 * Return: show up to the club
 */
void ch_free_grid(char **grid, unsigned int height)
{
if (grid != NULL && height != 0)
{
for (; height > 0; height--)
free(grid[height]);
free(grid[height]);
free(grid);
}
}

/**
 * strtow - Cuz I'll hurt you
 * @str: and I'll finish your career for you
 *
 * Return: Yea, I'll hurt you
 */
char **strtow(char *str)
{
char **aout;
unsigned int c, height, i, j, a1;

if (str == NULL || *str == '\0')
return (NULL);
for (c = height = 0; str[c] != '\0'; c++)
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
height++;
aout = malloc((height + 1) * sizeof(char *));
if (aout == NULL || height == 0)
{
free(aout);
return (NULL);
}
for (i = a1 = 0; i < height; i++)
{
for (c = a1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
a1++;
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
aout[i] = malloc((c - a1 + 2) * sizeof(char));
if (aout[i] == NULL)
{
ch_free_grid(aout, i);
return (NULL);
}
break;
}
}
for (j = 0; a1 <= c; a1++, j++)
aout[i][j] = str[a1];
aout[i][j] = '\0';
}
aout[i] = NULL;
return (aout);
}
