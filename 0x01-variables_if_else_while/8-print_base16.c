#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
int num;
int lower = 'a';
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
while (lower <= 'f')
{
putchar(lower);
lower += 1;
}
putchar('\n');
return (0);
}
