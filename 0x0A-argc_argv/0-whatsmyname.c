#include <stdio.h>

/**
 * main - prints the file name
 * @argc:argument for interger input
 * @argv: argument for array input
 * Return:integer
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
	{
		count = 0;
		printf("%s\n", argv[count]);
	}
	return (0);
}
