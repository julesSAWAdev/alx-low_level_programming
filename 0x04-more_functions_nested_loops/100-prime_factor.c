#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
int main(void)
{
	long b, c;

	b = 612852475143;

	for (c = 2; b > c; c++)
	{
		while (b % c == 0)
		{
			b = b / c;
		}
	}
	printf("%lu", c);
	putchar('\n');
	return (0);
}

