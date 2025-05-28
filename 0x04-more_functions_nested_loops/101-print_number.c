#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	int power = 1;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;

	while (temp / 10)
	{
		power *= 10;
		temp /= 10;
	}

	while (power)
	{
		_putchar((n / power) % 10 + '0');
		power /= 10;
	}
}
