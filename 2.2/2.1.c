#include<stdio.h>

int main()
{
	int sum = 1;
	for (int i = 1; i <= 5; i++)
		sum *= i;
	printf("%d",sum);
	return 0;

}