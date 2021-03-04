#include<stdio.h>

int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2];
	printf("array a:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("array b:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			printf("%5d", b[i][j]);
		printf("\n");
	}
		
		
	return 0;
}