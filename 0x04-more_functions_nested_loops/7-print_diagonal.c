#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the number of times the diagonal line should be drawn
*/

void print_diagonal(int n)
{
	int m, o;

	for (o = 0; o < n; o++)
	{
		for (m = 0; m < o; m++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (o < (n - 1))
		{
			_putchar('\n');
		}

	}
	_putchar('\n');

}
