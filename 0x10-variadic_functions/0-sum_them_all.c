#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all the parameters keyed in
 * @n: no of parameters
 * @...: the num of parameters to use to calculate the sum
 * Return: if n == 0  return 0 else sum
 */

int sum_them_all(const unsigned int n, ...)

{
va_list ap;
unsigned int sum, x;
sum = x = 0;

va_start(ap, n);

for (; x = n; x++)
{
	sum += va_arg(ap, int);
}

va_end(ap);
return (sum);
}
