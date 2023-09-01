#include "main.h"

/**
* is_prime - A function that checks if a number is a prime number.
* @n: number to be checked.
* @m: iterator.
* Return: 1 if n is a prime number. 0 if n is not a prime number.
*/
int is_prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, m + 1));
}


/**
* is_prime_number - A function that returns the 1 for a prime number
* @n: The number to be checked
* Return: 1 if the number is a prime number and 0 if not
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
