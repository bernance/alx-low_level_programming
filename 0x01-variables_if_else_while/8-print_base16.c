#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alph;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
