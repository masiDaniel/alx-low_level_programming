#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - print min number
 * @argc: no of arguments
 * @agv: array of arguments
 * Return: 0 when succesfull and 1 when not
 */
int main (int argc, char *argv[])
{
int result, num, j;
int coins[] = {25,10,5,2,1};

if (argc != 2)
printf("erroe\n");
return (0);

num = atoi(argv[1]);
result = 0;

if (num < 0)
printf("0\n");
return (0);

for (j = 0 ;j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
result++;
num -= coins[j];
}
}
printf("%d\n", result);
return (0);

}
