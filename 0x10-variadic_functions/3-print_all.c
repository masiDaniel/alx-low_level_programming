#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything there
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
va_list list;

char *string;
char *separator = "";
int x;
x = 0;

va_start(list, format);
if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
