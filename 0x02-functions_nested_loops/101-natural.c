#include <stdio.h>

/**
* main - This is the main function where all the code goes in
* Return: Always 0
*/

int main(void)
{
	int n, m, j;

	n = 1024;
	m = 0;

	for (j = 0; j < n; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			m = m + j;
		}
	}
	printf("%d", m);
	printf("\n");
	return (0);
}
