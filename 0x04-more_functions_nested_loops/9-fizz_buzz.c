#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 *        but for multiples of 3 print Fizz,
 *        for multiples of 5 print Buzz,
 *        and for multiples of both 3 and 5 print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
