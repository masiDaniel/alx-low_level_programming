#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  print out numbers followed by a new
 * @seperator: sting between the numbers
 * @n: no of intergers passed
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
va_list numbers;

va_start(numbers, n);

index = 0;
for (; index < n; index++)
{
printf("%d", va_arg(numbers, int));

	if (separator != NULL && index != (n - 1))
	{
		printf("%s", separator);

	}
}
printf("\n");
va_end(numbers);
}
