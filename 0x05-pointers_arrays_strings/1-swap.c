#include <stdio.h>
/**
 *swap_int = swaps thevalue of two integers
 *@a: The first integer to be swapped
 *@b:second integer to be swapped
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
