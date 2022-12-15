#include "main.h"
#include <stdio.h>

/**
 * print_line - print line
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
