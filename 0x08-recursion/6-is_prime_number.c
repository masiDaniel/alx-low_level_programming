#include "main.h"

int real_prime_number(int n, int i);
/**
 *is_prime_number - test a prime number
 *@n: the number
 *Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (real_prime_number(n, n - 1));
}


/**
 * real_prime_number - tests further if its a prime number
 * @n: the number
 * @i: the iterator
 *Return: 1 if prime, 0 if not
 */


int real_prime_number(int n, int i)
{
if (i == 1)
return (1);
if (i > 0 && n % i == 0)
return (0);
return (real_prime_number(n, i - 1));
}
