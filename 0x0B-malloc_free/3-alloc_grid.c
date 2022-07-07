#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 */
int **alloc_grid(int width, int height)
{

int **result;
int widthIndex;
int heightIndex = 0;

malloc(height);
malloc(width);
result = malloc(width * height);

while (heightIndex < height)
{
widthIndex = 0;
while (widthIndex < width)
{
result[heightIndex][widthIndex] = 0;
widthIndex++;
}
heightIndex++;
}

return (result);

}
