#include <stdio.h>

/**
* main - This is the main function where all the codes are written in
* Return: zero(0)
*/

int main(void)
{
	int m, n, o, p;

	n = 1;
	m = 2;

	printf("%d, %d, ", n, m);
	for (o = 2; o <= 48; o++)
	{
		p = n + m;
		printf("%lld, ", p);

		n = m;
		m = p;

		if (o == 48)
		{
			printf("%lld", p);
		}
	}
	printf("\n");
	return (0);
}
