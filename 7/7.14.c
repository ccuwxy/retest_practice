#include<stdio.h>
float Max = 0, Min = 0;

int main()
{
	float average(float array[], int n);
	float aver, score[10];
	printf("Please input 10 scores:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	aver = average(score, 10);
	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, aver);
	return 0;
}

float average(float array[], int n)
{
	float aver, sum = array[0];
	Max = Min = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] > Max)
			Max = array[i];
		else if (array[i] < Min)
			Min = array[i];
		sum += array[i];
	}
	aver = sum / n;
	return aver;
}