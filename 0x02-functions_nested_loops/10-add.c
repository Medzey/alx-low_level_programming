#include "main.h"
#include <stdio.h>

/**
  *function that adds two integers and returns the result.
  */
int add(int a, int b);

int main()
{
	int x = 3, y = 4, sum;
	sum = add(x, y);
	printf("%d + %d = %d\n", x, y, sum);
	return 0;
}
