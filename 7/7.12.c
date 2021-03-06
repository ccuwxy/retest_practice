#include<stdio.h>

int main()
{
	void sort(int array[], int n);
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

void sort(int array[], int n)
{
	int k, t;
	for (int i = 0; i < n - 1; i++)
	{
		k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}