#include "main.h"
/**
 * _print_rev_recursion - prints a string provided in reverse
 * this is because the _putchar statts printing only after it has gotten to the end of line
 * @s: the string provided
 * Return: none
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
