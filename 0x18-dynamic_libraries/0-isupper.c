#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isupper(int x)
{
// we can also use the normal alphabet, it works just the same
    if (x >= 65 && x <= 90)
    {
     return (1);
    }
    return (0);
}
