#include "main.h"

/**
 * print_line - Check description
 * @n: input character
 * Description: Drawsa straight line in the terminal
 * Return: nothing
 */
void print_line(int n)
{
	char line = '_';
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar(line);
	}
	putchar('\n');
}
