#include "main.h"

/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_nuaber(int n)
{
	unsigned int q;
	int a, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		q = n;
	while (q / b > 9)
	{
		b = b * 10;
	}
	while (b > 0)
	{
		a = q / b;
		q = q % b;
		_putchar (a + '0');
		b = b / 10;
	}
	}
}

