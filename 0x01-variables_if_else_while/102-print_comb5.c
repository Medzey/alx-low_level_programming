#include <stdio.h>
int main(void){
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
	{
            if (i == j)
	    {
                continue;
            }

            // print first number
            if (i < 10)
	    {
                putchar('0');
            }
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');

            // print separator
            putchar(' ');
            putchar('-');
            putchar(' ');

            // print second number
            if (j < 10)
	    {
                putchar('0');
            }
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            // print comma and space, unless this is the last combination
            if (i != 99 || j != 98)
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}
