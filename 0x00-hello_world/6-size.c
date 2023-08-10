#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0(Success)
*/

int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("\n");
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("\n")
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("\n");
	printf("Size of a long long int: %lld byte(s)", sizeof(long long int));
	printf("\n");
	printf("Size of a float: %f byte(s)", sizeof(float));
return (0);
}
