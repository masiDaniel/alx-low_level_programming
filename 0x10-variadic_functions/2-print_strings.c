#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print out strings accompanied by a new line
 * @separator: string between the strings
 * @n: no of strings to be printed
 * @...: variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int index = 0;
char *sstring;
va_list strings;

va_start(strings, n);

for (; index < n; index++)
{

sstring = va_arg(strings, char *);

(sstring == NULL) ? printf("(nil)") : printf("%s", sstring);

	if (separator != NULL && index != (n - 1))
	{
	printf("%s", separator);
	}
}
printf("\n");

va_end(strings);

}
