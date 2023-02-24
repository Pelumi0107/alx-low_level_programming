#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line is printed
 * Return: ()
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
		_putchar('\n');
	}
}
