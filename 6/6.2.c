#include<stdio.h>

int main()
{
	int f[20] = { 1,1 };
	for (int i = 2; i < 20; i++)
		f[i] = f[i - 1] + f[i - 2];
	for (int i = 0; i < 20; i++)
		printf("%d ", f[i]);
	return 0;
}