#include <stdio.h>
#include "main.h"

/**
* print_array - this function prints n elements of an array
* @a: this is the array name
* @n: this is the number of elements to be printed
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
