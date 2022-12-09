#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int o = '0';

	int t = '0';

	for (t = '0'; t <= '9'; t++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			if (!((o == t) || (t >  o)))
			{
				putchar(t);
				putchar(o);
				if (!(o == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

