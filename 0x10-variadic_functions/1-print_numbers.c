#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 *
 * @separator: string, separator between numbers.
 * @n: Number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	var list Numbers;	
	 int i;
	int num;


	va_start(Numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(str, int);
		printf("%d", num);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(Numbers);

	printf("\n");
}
