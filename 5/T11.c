#include<stdio.h>

int main()
{
	float high = 100;
	float x=0;
	int n = 10;
	while (n--)
	{
		x += high;
		high /= 2;
		x += high;
	}
	printf("%f\n%f", x - high, high);
	return 0;
}