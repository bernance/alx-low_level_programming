#include "main.h"


/**
* _strlen - This function returns the length of a string
* @s: this is the string to be checked
* Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
