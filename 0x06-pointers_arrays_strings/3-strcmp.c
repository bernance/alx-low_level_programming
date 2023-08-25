#include "main.h"

/**
* _strcmp - A function that compares two strings
* @s1: the first string
* @s2: the second string
* Return: 0 or the value
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2); 
}
