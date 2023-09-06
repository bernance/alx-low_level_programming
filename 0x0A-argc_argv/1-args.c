#include <stdio.h>
#include "main.h"

/**
* main - A fucntion that prints the number of arguments it receives
* @argc: number of arguments
* @argv: an array that contains the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
