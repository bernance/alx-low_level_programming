#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* main - A fucntion that adds positive numbers
* @argc: number of arguments
* @argv: an array that contains the arguments
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned int j = 0;
	unsigned int sum = 0;
	char *ptr;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			for (j = 0; j < strlen(ptr); j++)
			{
				if (ptr[j] < 48 || ptr[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(ptr);
			ptr++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
