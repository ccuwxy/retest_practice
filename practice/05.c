#include<stdio.h>
int main()
{
	int a[][4] = { 0,0 };
	for (int i = 0; i < 4; i++)
		printf("%d ", a[0][i]);

	int b[3] = { 3 * 0 };
	for (int i = 0; i < 3; i++)
		printf("%d ", b[i]);
	return 0;
}