#include<stdio.h>

int main()
{
	int a = 3, b = 4, c = 5;
	int x, y;
	printf("%d ", a + b > c && b == c);
	printf("%d ", a || b + c && b - c);
	printf("%d ", !(a > b) && !c || 1);
	printf("%d ", !(x = a) && (y = b) && 0);
	printf("%d", !(a + b) + c - 1 && b + c / 2);
	return 0;
}