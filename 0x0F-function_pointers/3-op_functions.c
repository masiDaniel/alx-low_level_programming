#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of both
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - add two numbers
 * @a: first number
 * @b: second number
 * Return: the result after subtraction
 */

int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - add two numbers
 * @a: first number
 * @b: second number
 * Return: product of both
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - add two numbers
 * @a: first number
 * @b: second number
 * Return: quotient
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - add two numbers
 * @a: first number
 * @b: second number
 * Return: modular
 */

int op_mod(int a, int b)
{
return (a % b);
}
