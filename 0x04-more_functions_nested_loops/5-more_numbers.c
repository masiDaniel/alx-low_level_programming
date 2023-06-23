#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9 
 * REturn: The numbers from 0 to 9
 */

void more_numbers(void)

{
int x,j;
for (x=0;x<10;x++)
{
for (j=0;j<15;j++)
{
if(j>=10)
_putchar(j/10 + '0');
_putchar(j%10 + '0');
}
_putchar('\n');
}
}
