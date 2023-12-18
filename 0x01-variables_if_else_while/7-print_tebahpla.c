#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
int var = 'z';
while (var >= 'a')
{
putchar(var);
var -= 1;
}
putchar('\n');
return (0);
}
