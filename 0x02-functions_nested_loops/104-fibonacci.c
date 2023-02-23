#include <stdio.h>

int main(void)
{
	int count, current = 2, prev = 1, prev2 = 1;

	printf("%d, %d", prev2, prev);

	for (count = 2; count < 98; count++)
	{
		current = prev + prev2;
		printf(", %d", current);
		prev2 = prev;
		prev = current;
	}
	printf("\n");
	return 0;
}
