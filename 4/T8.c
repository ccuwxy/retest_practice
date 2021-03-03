#include<stdio.h>

int main()
{
	int score;
	char ch;
	scanf("%d", &score);
	if (score >= 90)
		ch = 'A';
	else if (score >= 80)
		ch = 'B';
	else if (score >= 70)
		ch = 'C';
	else if (score >= 60)
		ch = 'D';
	else
		ch = 'E';
	printf("%c", ch);
	return 0;
}