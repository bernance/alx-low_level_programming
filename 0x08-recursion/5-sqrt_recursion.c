#include "main.h"

/**
 * power - A function that returns the natural square root of a number.
 * @n: number.
 * @m: iterator.
 * Return: square root or -1.
 */
int power(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
			return (m);
		else
			return (-1);
	}
	return (0 + power(n, m + 1));
}


/**
* _sqrt_recursion - This function returns the square root of the number
* @n: the number
* Return: -1 or the squareroot
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
