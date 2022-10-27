#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: destination string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int i;
	int len = strlen(dest);
	int j = (n - 1);
=======
	int i = 0, j;
>>>>>>> 109c3eef827d136edc80d197ff2722ade753eb51

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
