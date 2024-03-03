# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * str_concat- concatenates two strings
 * @s1: input string
 * @s2: iput string
 * Return: empty strin if null or pointer to a newly
 * allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *first, *second;
	int i = 0, len1 = 0, len2 = 0;

	first = s1;
	second = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = first;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = second;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	first = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
		new_str[i] = '\0';
		return (first);
}

