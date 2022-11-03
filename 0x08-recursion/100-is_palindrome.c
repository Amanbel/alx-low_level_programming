#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * test - validates the string
 * @str: string to test
 * @len: length of the string
 * @cnt: length counted with calling of the function
 * Return: 1 if palindrome. 0 if not
 */

int test(char *str, int len, int cnt)
{
	if (cnt >= len)
		return (1);
	if (str[cnt] == str[len])
		return (test(str, len - 1, cnt + 1));
	return (0);
}

/**
 * is_palindrome - checks to see if a string is palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s) - 1;
	int cnt = 0;

	return (test(s, len, cnt));
}
