#include <stdlib.h>
#include <stdio.h>

/**
 * main - print opcodes
 * @argc: num of arguments
 * @argv: array of argumrnts
 * Return: 0 when succesful
 */

int main(int argc, char *argv[])
{
	char *array;
	int b, x;

if (argc != 2)
{
	printf("no of arguments error\n");
	exit(1);
}

b = atoi(argv[x]);

if (b < 0)
{
printf("bytes allocated error\n");
exit(2);
}

array = (char *)main;
x = 0;
for (; x < b; x++)
{
if (x == b - 1)
{
	printf("%02hhx\n", array[x]);
break;
}
printf("%02hhx", array[x]);
}
return (0);
}
