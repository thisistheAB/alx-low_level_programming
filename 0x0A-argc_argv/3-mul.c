#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Just as all that's born is new
 * @argc: You know what I say is true
 * @argv: That I'll be loving you always
 *
 * Return: Until the day is night and night is day
 */

int main(int argc, char *argv[])
{

int multiplicando = atoi(argv[1]);
int multiplicatore = atoi(argv[2]);
int result;

if (argc < 3)
{
printf("Error\n");
return(1);
}

result = multiplicando * multiplicatore;

printf("%d\n", result);

return(0);

}
