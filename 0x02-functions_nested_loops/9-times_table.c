#include "main.h"

/*
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return : void
 */
void times_table(void)
{
int i, j, mul;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
mul = i * j;
if (mul >= 10)
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
else
{
_putchar(mul + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
