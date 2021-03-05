#include<stdio.h>

int main()
{
	int age(int);
	printf("%d", age(10));
	return 0;
}

int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return c;
}