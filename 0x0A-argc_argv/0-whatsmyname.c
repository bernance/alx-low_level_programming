#include <stdio.h>
#include "main.h"

/**
* main - A fucntion that prints its name followed by a new line
* @argc: number of arguments
* @argv: an array that contains the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
