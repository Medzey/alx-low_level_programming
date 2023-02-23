#include <stdio.h>

/**
  *Write a program that computes and prints the sum of all
  *the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
  */
int main(void)
{
    int sum = 0;

    for (int i = 0; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    printf("\n");

    return 0;
}

