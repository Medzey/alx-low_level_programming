#include <stdio.h>

int main(void)
{
	int sum = 0;
	int prev1 = 1, prev2 = 2, curr = 0;
    
	while (curr < 4000000)
	{
        if (curr % 2 == 0)
        {
            sum += curr;
        }
        prev1 = prev2;
        prev2 = curr;
        curr = prev1 + prev2;
	}
    
	printf("%d\n", sum);
    
    return 0;
}

