#include "main.h"
#include <stdlib.h>

/**
 * free_grid - FREE THE GODAMN SLAVES
 * @grid: I HAVE A DREAM...
 * @height: OH fuck off, no one gives a toss about your dream
 *
 * Return: get a bloody job
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
