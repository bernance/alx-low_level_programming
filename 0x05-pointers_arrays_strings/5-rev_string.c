#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char ch;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}
}
