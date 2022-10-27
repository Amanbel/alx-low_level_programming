#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "world\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	ptr = _strncat(s1, s2, 1024);

	return 0;
}
