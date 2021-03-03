#include<stdio.h>

int main()
{
	float a, b, temp;
	scanf("%f%f", &a, &b);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("%5.2f %5.2f", a, b);
	return 0;
}