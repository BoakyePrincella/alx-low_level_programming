#include "main.h"

/**
 * print_rev - check description
 * Description: Prints a string in reverse, followed by a new line
 * @s: input character
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
