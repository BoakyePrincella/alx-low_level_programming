# include <stdio.h>
# include <stdlib.h>

/**
 * create_array - create an array of chars, and
 * initialize it to a specific char
 * @size: size of space
 * @c: input character
 * Return: character pointer
*/
char *create_array(unsigned int size, char c)
{
	char *characters = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (characters  == NULL)
	{
		return (NULL);
	}


	while (i < size)
	{
		characters[i] = c;
		i++;
	}
	return (characters);
}

