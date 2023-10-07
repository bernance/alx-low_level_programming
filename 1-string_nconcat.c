#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat- A function that concatenates two strings
* @s1: The first string
* @s2: the second string
* @n: bytes
* Return: A pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;

	char *c_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	c_string = malloc(sizeof(char) * l + 1);
	if (c_string == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			c_string[j] = s1[j];
		if (j >= i)
		{
			c_string[j] = s2[k];
			k++;
		}
		j++;
	}
	c_string[j] = '\0';
	return (c_string);
}
