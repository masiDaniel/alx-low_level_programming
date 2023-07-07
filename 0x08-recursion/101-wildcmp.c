#include "main.h"

/**
 * wildcmp - Compare string 1 and 2
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '*' && *s2 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}

if (*s2 == '*')
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
