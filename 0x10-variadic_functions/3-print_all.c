#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 * Return: Nothing
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *str_value;
	int int_value;
	int i = 0;
	char current_format;

	va_start(args, format);
	while (format && format[i])
	{
		current_format = format[i];
		switch (current_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				int_value = va_arg(args, int);
				printf("%d", int_value);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str_value = va_arg(args, char *);
				if (str_value == NULL)
				printf("(nil)");
			else
				printf("%s", str_value);
				break;
		}
		if (format[i + 1] && (current_format == 'c' || current_format == 'i'
			|| current_format == 'f' || current_format == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

