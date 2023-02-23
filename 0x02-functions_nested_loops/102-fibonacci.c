#include <stdio.h>

int main(void)
{
	int fib1 = 1, fib2 = 2;

	printf("%d, %d", fib1, fib2);

	for (int i = 2; i < 50; i++)
	{
        int fib = fib1 + fib2;
        printf(", %d", fib);
        fib1 = fib2;
        fib2 = fib;
	}
	printf("\n");

	return 0;
}

