#include "main.h"
/**
 * main -checks if number is positive or negative
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
if (i < 0)
printf("%d is %s \n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s \n ", i, "positive");
}
else
{
printf("%d is %s \n", i, "zero ");
}
return (0);
}
