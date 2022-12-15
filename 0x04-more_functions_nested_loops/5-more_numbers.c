#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Display numbers 0-14
 * Return: void
 */

void more_numbers(void)
{
	int n, m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 1; m <= 14; m++)
		{
			if (m >= 10)
			putchar('1');
			putchar(m % 10 + '0');
		}
		putchar('\n');
	}
}

