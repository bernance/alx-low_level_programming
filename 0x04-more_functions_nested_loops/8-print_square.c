#include "main.h"

/**
* print_square - prints a square followed by a new line
* @size: this is the size of the square
*/

void print_square(int size)
{
	int length, width;

	for (length = 0; length < size; length++)
	{
		for (width = 0; width < size; width++)
        	{
        	        _putchar(35);
        	}
		if (size <= 0)
			_putchar('\n');

		_putchar('\n');
	}
}
