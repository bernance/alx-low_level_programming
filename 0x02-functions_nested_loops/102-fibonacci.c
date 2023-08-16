#include <stdio.h>
#include <complex.h>
/**
* main - This is the main function where all the codes are written in
* Return: zero(0)
*/

int main(void)
{
	long int m, n, o, p;

	n = 1;
	m = 2;

	printf("%ld, %ld, ", n, m);
	for (o = 0; o < 49; o++)
	{
		p = n + m;
	
		printf("%ld, ", p);
		n = m;
		m = p;

		if (o == 48)
		{
			printf("%ld\n", p);
		}

	}
	return (0);
}
