#include "main.h"

/**
* more_numbers - this function prints from 0 - 14 10 times
*/

void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			_putchar((d % 10) + 48);
			if (d >= 10)
			{
				_putchar((d / 10) + 48);
			}
			
		}
		_putchar('\n');
	}
}
