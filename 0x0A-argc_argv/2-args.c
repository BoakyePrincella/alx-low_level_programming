# include <stdio.h>

/**
 * main - print the values of all arguments passed
 * @argc: input integer
 * @argv: input array of strings
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
