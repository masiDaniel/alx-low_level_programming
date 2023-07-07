#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments passed
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a = 0;
for (; a < argc; a++)
printf("%s\n", argv[a]);
return (0);
}
