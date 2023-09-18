#include <stdio.h>
/**
 * _strlen - returns the length of a string
 *@str: the string to be test
 *Return: length  SUCCESS
 */
size_t  _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
