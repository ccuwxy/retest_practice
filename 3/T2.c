#include<stdio.h>
#include<math.h>
int main()
{
	float r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r4 = 0.0585, r5 = 0.0072;
	printf("%.2f\n", 1000.0 * (1.0 + r4 * 5));
	printf("%.2f\n", (1000.0 * (1.0 + r2 * 2))* (1.0 + r3 * 3));
	printf("%.2f\n", (1000.0 * (1.0 + r3 * 3)) * (1.0 + r2 * 2));
	printf("%.2f\n", 1000.0 * pow((1.0 + r1), 5));
	printf("%.2f\n", 1000.0 * pow((1 + r5 / 4.0), 4 * 5));

	return 0;
}