#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print the triangle
 * @size: sizeindicator
 * Return: void.
 */

void print_triangle(int size)
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
			for (m = n; m < size; m++)
			{
				putchar(' ');
			}
			for (m = 1; m <= n; m++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
