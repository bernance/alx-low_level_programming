#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - A function that concatenates two strings
* @s1: the frist string
* @s2: the second string
* Return: A pointer to the conactenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *c_string;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	c_string = malloc(sizeof(char) * (i + j + 1));

	if (c_string == NULL)
	{
		free(c_string);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		c_string[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		c_string[k] = s2[j];

	return (c_string);
}
