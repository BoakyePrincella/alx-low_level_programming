#include <stdio.h>

/**
 * main - A program that prints in lowercase using putchar
 * Return:0
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
