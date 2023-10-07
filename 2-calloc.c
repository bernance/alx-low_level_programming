#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - A function that allocates memory for an array using malloc
* @nmemb: the number of elements in the array
* @size: the size of the array
* Return: A pointer to the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb * size));

	if (ptr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
