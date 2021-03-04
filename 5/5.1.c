#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i = 1, sum = 0;
	while (i <= n)
	{
		sum += i++;
	}
	printf("%d", sum);
	return 0;
}