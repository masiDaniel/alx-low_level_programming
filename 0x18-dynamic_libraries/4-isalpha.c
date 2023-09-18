#include "main.h"
/**
 * _isalpha - checks if a letter and non letter
 * @c: the character to be checked
 * Return: 1 if its a letter and 0 if not
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
