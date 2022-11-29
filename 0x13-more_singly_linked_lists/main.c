#include <stdio.h>

int back(int *ptr)
{
	printf("%p %d\n", ptr, *ptr);
	return (0);
}

int main(void)
{
	int a = 88;
	int *j;

	j = &a;

	back(j);
	return (0);
}
