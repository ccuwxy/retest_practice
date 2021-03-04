#include<stdio.h>
#define SUM 100000
int main()
{
	float amount, aver, total;
	int i;
	for (i = 1, total = 0; i <= 1000; i++)
	{
		scanf("%f", &amount);
		total += amount;
		if (total >= SUM)
			break;
	}
	aver = total / i;
	printf("%d\n", i);
	printf("%.2f", aver);
	return 0;
}