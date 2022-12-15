#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print the diagonals
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int a, b;

		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	putchar('\n');
	}
}
