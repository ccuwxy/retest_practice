#include<stdio.h>

int main()
{
	int n[4];
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &n[i]);
	}
	int min,temp;
	for (int i = 0; i < 3; i++)
	{
		min = i;
		for (int j = i+1; j < 4; j++)
		{
			if (n[min] > n[j])
			{
				min = j;
			}
		}
		temp = n[min];
		n[min] = n[i];
		n[i] = temp;
	}

	for (int i = 0; i < 4; i++)
		printf("%d ", n[i]);
	return 0;
}