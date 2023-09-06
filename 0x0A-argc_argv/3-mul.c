#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - A fucntion that multiplies two numbers
* @argc: number of arguments
* @argv: an array that contains the arguments
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
