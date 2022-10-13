#include<stdio.h>

/**
 * main - Entry Point
 * Description: program to output size of data types
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;

	float floatType;

	long int liType;

	long long int lliType;

	char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(liType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(lliType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
