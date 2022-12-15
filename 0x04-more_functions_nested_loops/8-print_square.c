#include "main.h"
#include <stdio.h>

/**
 * print_square - print squares
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int n, m;

		for (n = 1; n <= size; n++)
		{
			for (m = 0; m < size; m++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
