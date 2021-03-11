#include<stdio.h>
#include<math.h>

int main()
{
	float x, y;
	scanf("%f%f", &x, &y);
	float d1 = sqrt(fabs(pow(x - 2, 2) + pow(y - 2, 2)));
	float d2 = sqrt(fabs(pow(x - 2, 2) + pow(y + 2, 2)));
	float d3 = sqrt(fabs(pow(x + 2, 2) + pow(y - 2, 2)));
	float d4 = sqrt(fabs(pow(x + 2, 2) + pow(y + 2, 2)));

	if (d1 <= 1 ||d2 <= 1 ||d3 <= 1 ||d4 <= 1)
		printf("10");
	else
		printf("0");

	return 0;
}