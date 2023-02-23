#include "main.h"
#include <stdio.h>

/**
  *function that prints the 9 times table, starting with 0.
  */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++) {
        for (minute = 0; minute < 60; minute++)
	{
            _putchar("%02d:%02d\n", hour, minute);
        }
    }
}
