#include<stdio.h>

int main()
{
	int fac(int);
	int n, y;
	scanf("%d", &n);
	y = fac(n);
	printf("%d!=%d", n, y);
	return 0;
}

int fac(int n)
{
	int f;
	if (n < 0)
	{
		f = -1;
		printf("error!");
	}
	else if (n == 0 || n == 1)
		f = 1;
	else
		f = fac(n - 1) * n;
	return f;
}