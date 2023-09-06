#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - A string thaat returns a pointer to a copy of a string
* *str: the pointer of the string
* Return: Null or the pointer to the copy of the string
*/
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

			for (i = 0; str[i] != '\0'; i++)
				;

	copy = (char *)malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy[j] = str[j];

	return (copy);
}
