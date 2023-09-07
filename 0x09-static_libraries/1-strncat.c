#include "main.h"

/**
* _strncat - a function that concatenates two strings
* @dest: this is the destination string
* @src: this is the string be appended to the dest
* @n: this is the number of bytes to be appended from src
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[i++])
		dlen++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
