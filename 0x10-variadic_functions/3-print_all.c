#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list any;
	char *string;
	int i;

	va_start(any, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
            		case 'c':
				printf("%c", (char) va_arg(any, int));
				break;
			case 'i':
				printf("%i", va_arg(any, int));
				break;
			case 'f':
				printf("%f", va_arg(any, double));
				break;
			case 's':
				string = va_arg(any, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(any);
}
