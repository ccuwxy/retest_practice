#include<stdio.h>

int main()
{
	int i=1, sum = 0;
	do
	{
		sum += i++;
	} while (i <= 100);
	printf("%d",sum);
	return 0;
}