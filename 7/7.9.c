#include<stdio.h>

int main()
{
	int max(int, int);
	int a[10], m, n,i;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i = 1, m = a[0], n = 0; i < 10; i++)
	{
		if (max(m, a[i]) > m)
		{
			m = max(m, a[i]);
			n = i;
		}
	}
	printf("The largest number is %d\n it is the %dth number.", m, n + 1);
	return 0;
}
int max(int x, int y)
{
	return x > y ? x : y;
}