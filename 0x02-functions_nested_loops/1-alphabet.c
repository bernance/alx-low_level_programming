#include "main.h"

/**
* print_alphabet - this is the function to print the alphabets
*
* Return: The return value is 0
*/

void print_alphabet(void)
{
	char a;

	for  (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
