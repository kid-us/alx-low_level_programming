#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * print Fizz if the number is multiple of 3 and Buzz for multiple of 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d ", num);
		}
	}
	printf("\n");
	return (0);
}
