#include<stdio.h>


int main()
{
	float n1 = 1, n2 = 2;
	float s = 0;
	int n;
	scanf("%d", &n);
	while (n--)
	{
		s += n2 / n1;
		n2 += n1;
		n1 = n2 - n1;
	}
	printf("%.4f", s);
	return 0;
}