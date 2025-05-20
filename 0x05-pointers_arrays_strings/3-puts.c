#include "main.h"

/**
 * _puts - function name
 * @str:function parameter
 * Return: Nothing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
putchar('\n');
}
