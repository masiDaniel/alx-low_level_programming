#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(int len, int i, char *s);

/**
 * is_palindrome - checks the string
 * @s: string
 * Return: 1 if true, 0 if falsw
 */

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(_strlen_recursion(s), 0, s));
}

/**
 * _strlen_recursion - gives the length of the string
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters
 * @s: string
 * @i: iterator
 * @len: lenght of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(int len, int i, char *s)
{
if (*(s + len - 1) != *(s + i))
return (0);
if (i >= len)
return (1);
return (check_palindrome(len - 1, i + 1, s));
}

