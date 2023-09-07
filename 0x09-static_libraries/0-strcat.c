#include "main.h"

/**
* _strcat - A function that concatenates two strings
* @dest: the destination string
* @src: the string to be appended to dest
* Return: a poijnter to dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dlen = 0;

	while (dest[i++])
	{
		dlen++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
