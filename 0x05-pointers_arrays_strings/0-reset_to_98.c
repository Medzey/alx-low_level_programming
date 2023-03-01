#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
	int my_number = 5;

	reset_to_98(&my_number);
	printf("%d\n", my_number); /* prints 98*/
	return (0);
}

