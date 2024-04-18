#include "main.h"

/**
 * _strlen_recursion - checks the length of a string
 * @s: the string to be checked
 * Return: n the number of characters
 */

int _strlen_recursion(char *s)
{
    int n = 0;
    if (*s) {
        n++;
        n += _strlen_recursion(s + 1);
    }
    return (n);
}
