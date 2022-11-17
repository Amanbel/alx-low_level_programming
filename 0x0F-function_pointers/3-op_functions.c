#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds integers
 * @a: int1
 * @b:int2
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: num1
 * @b:num2
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two num
 * @a: num1
 * @b: num2
 * Return: multiplication of num
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: num1
 * @b: num2
 * Return: division
 */

int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives remender of two num
 * @a: num1
 * @b: num2
 * Return: remender
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
