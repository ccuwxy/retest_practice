#include<stdio.h>

int main()
{
	int max(int, int);
	int min(int, int);
	int (*p)(int, int);
	int a, b, c, n;
	printf("Please input a and b:\n");
	scanf("%d%d", &a, &b);
	printf("Please choose 1 or 2:\n");
	scanf("%d", &n);
	if (n == 1)
		p = max;
	else if (n == 2)
		p = min;
	c = (*p)(a, b);
	printf("a=%d,b=%d\n", a, b);
	if (n == 1)
		printf("max = %d\n", c);
	else if (n == 2)
		printf("min = %d\n", c);
	return 0;
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	return x < y ? x : y;
}