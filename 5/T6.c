#include<stdio.h>

int main()
{
	int n = 20;
	double num = 1, s=0;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
		s += num;
	}
	printf("%21.15e", s);
	return 0;
}