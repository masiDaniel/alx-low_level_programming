#include "main.h"
int _prime(int n, int i);
/**
 * _sqrt_reursion(int n)
 * @n: the number to be checked
 * Return: -1 if it doesnt have a square root
 */

int _sqrt_recursion(int n)
{
if (n <= 1)
{
return (0);
}
return (_prime(n, n-1));
}
/**
 * _prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (_prime(n, i - 1));
}
