#include<stdio.h>

int main()
{
	int a1=2, a2;
	int* p = &a1;
	char* s = "china";
	char* s1;
	s1 = "china";
	p = &a1;
	p = a1;
	char c1, c2;
	scanf("%d%c%d%c", &a1, &c1, &a2, &c2);
	printf("%d %c %d %c", a1, c1, a2, c2);
	return 0;
}