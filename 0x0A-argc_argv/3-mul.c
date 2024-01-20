# include <stdio.h>
# include <stdlib.h>

/**
 * main - print the values of all arguments passed
 * @argc: input integer
 * @argv: input array of strings
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int mul;
	int a;
	int b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
}
