#include<stdio.h>

int main()
{
	int num;
	int count = 0;
	int a[5];
	scanf("%d", &num);
	while (num)
	{
		a[count] = num % 10;
		num /= 10;
		count++;
	}
	for (int i = count-1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < count; i++)
		printf("%d", a[i]);
	return 0;
}