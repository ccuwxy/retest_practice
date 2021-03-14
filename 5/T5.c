#include<stdio.h>

int main()
{
	int s=0, n, num=0, a;
	scanf("%d%d", &a,&n);
	for (int i = 1; i <= n; i++)
	{
		num += a;
		s += num;
		a *= 10;
		//printf("%d %d %d\n", num, s, a);
	}
	printf("%d", s);

	return 0;
}