#include<stdio.h>

int main()
{
	float score[][4] = { {60,70,80,90},{56,89,67,88},{84,78,90,66} };
	float* search(float(*pointer)[4], int n);
	float* p;
	int i, k;
	printf("enter the number of student:\n");
	scanf("%d", &k);
	printf("The scores of No.%d are:\n", k);
	p = search(score, k);
	for (i = 0; i < 4; i++)
		printf("%5.2f\t", *(p + i));
	return 0;
}

float* search(float(*pointer)[4], int n)
{
	float* pt;
	pt = *(pointer + n);
	return pt;
}