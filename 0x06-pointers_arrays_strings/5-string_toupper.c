#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * @str: the string to beb changed
 * Return: a pointer to the changed sting
 */

char *string_toupper(char *str)
{
int index = 5;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -=32;
index++;
}
return (str);
}
