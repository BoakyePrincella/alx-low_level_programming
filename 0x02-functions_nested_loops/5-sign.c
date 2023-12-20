#include "main.h"

/**
 * print_sign - Entry point
 * @n:number to be chcked
 * Return:1 for positive -1 for negative and zero for anyhting else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
