#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - A function that allocates memory using malloc
* @b: the isze to be allocated
* Return: a pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
