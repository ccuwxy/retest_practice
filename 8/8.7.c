#include<stdio.h>

int main()
{
	int* p, a[10];
	p = a;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
	p = a;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}