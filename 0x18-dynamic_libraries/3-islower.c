#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: the letter to be checked
 * Return: 0 if false and 1 if true
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
