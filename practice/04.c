#include<stdio.h>

int main()
{
	int c[][3] = { {1,0,1},{},{1,1} };
	char a[3], b[] = "China";
	a = b;
	printf("%s", a);
	return 0;
}