#include<stdio.h>

int main()
{
	float sum = 0;
	float num;
	float sign = 1;
	for (int i = 1; i <= 100; i++)
	{
		num = 1.0 / i;
		num *= sign;
		sum += num;
		sign *= -1;
		//printf("%f  ", num);
	}
	printf("%f", sum);
	return 0;
}