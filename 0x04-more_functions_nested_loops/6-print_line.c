#include "main.h"

/*
 * print_line - prints line
 * @n - function parameter
 * Return - Void
 */

void print_line(int n)
{
char c = '_';
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar(c);
}
putchar('\n');
}
}
