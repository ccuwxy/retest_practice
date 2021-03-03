#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 0)
		y = -1;
	else if (x > 0)
		y = 1;
	else
		y = 0;
	printf("%d", y);
	return 0;
}