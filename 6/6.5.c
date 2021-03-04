#include<stdio.h>

int main()
{
	int row = 0, colum = 0, max;
	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
	max = a[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				row = i;
				colum = j;
				max = a[i][j];
			}
		}
	}
	printf("%d %d %d", row, colum, max);
	return 0;
}