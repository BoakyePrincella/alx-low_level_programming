#include "main.h"

/**
 * _strlen - Entry point
 * @s:function parameter
 * Return:the length of the string
 */
int _strlen(char *s)
{
int i;
int total = 0;

for (i = 0; s[i] != '\0'; i++)
total++;
return (total);
}
