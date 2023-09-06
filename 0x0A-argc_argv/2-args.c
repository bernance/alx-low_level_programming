#include <stdio.h>
#include "main.h"

/**
* main - A fucntion that prints all the arguments it receives
* @argc: number of arguments
* @argv: an array that contains the arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
