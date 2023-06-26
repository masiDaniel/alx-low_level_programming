#include <stdio.h>
/**
 *@s - the string to be test
 *Return: length  SUCCESS
 */
size_t  _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
