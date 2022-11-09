#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "hello";
	unsigned int n = strlen(str);
	char *stri = malloc(n * sizeof(char));
	unsigned int i;

	for (i = 0; i < n; i++)
		*(stri + i) = *(str + i);

	printf("%s\n", stri);
	free(stri);
	return (0);
}
