#include<stdio.h>

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	return 0;
}