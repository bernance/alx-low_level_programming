#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - A function that creates an array of characters and intializes
* @size: This is the size of the array
* @c: This is the character to initialize the array with
* Return: A pointer to the array ofr NULL if it fails
*/


char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;


	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
