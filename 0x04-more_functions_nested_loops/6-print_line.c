#include "main.h"

/**
* print_line - A function that draws a straight line in the termnal
* @n: the number of times the line should be printed
*/

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar(95);
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
