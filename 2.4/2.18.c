#include<stdio.h>
int main()
{
	int i, t;
	t = 1;
	i = 1;
	while (i <= 5)
	{
		t *= i;
		i++;
	}
	printf("%d\n", t);
	return 0;
}