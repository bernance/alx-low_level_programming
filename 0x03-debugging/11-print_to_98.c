#include "main.h"
#include <stdio.h>

/**
* print_to_98 - A function that prints numbers from n to 98
* @n: The argument passed into the function
* Return: 0
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
