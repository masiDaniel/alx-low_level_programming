#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry point
 * @ac:int
 * @av: pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
char *str;
int a, b, c, d;
a = b = c = d = 0;

if (av == NULL || ac == 0)
return (NULL);

for (; a < ac; a++)
{
for (; av[a][b]; b++)
b++;

}
d += ac;
str = malloc(sizeof(char) * d + 1);

if (str == NULL)
return (NULL);

for (; a < ac; a++)
{
for (; av[a][b]; b++)
{
str[c] = av[c][b];
c++;
}

if (str[c] == '\0')
{
str[c++] = '\n';
}
}
return (str);
}
