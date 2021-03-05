#include<stdio.h>

int main()
{
	int max(float, float);
	float a, b;
	int c;
	scanf("%f %f", &a, &b);
	c = max(a, b);
	printf("%d", c);
	return 0;
}

int max(float x, float y)
{
	float z;
	z = x > y ? x : y;
	return z;
}