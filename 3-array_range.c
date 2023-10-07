#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - a function that creates an array of integers
* @min: the min value of the array
* @max: the max value of the array
* Return: a pointer to the array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
