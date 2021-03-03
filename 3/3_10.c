#include<stdio.h>

int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');

	int x, i, j, k;
	x = (i = 4, j = 16, k = 32);
	printf("%d\n", x);
	return 0;
}