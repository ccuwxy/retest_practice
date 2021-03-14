#include<stdio.h>

int main()
{
	int day = 10;
	int num = 1;
	while (--day > 0)
	{
		num = (1 + num) * 2;
	}
	printf("%d", num);
	return 0;
}