# include <stdio.h>
# include "main.h"
/**
 * main - Prints the number of arguments paseed into it
 * @argc: argument integer
 * @argv: argument array of strings
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
