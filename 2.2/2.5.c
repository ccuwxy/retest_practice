#include<stdio.h>
#include<math.h>
int main()
{
	int flag = 0;
	for (int i = 3; i <= 100; i++)
	{
		for (int j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
			printf("%d\n", i);
		flag = 0;
	}
	return 0;
}