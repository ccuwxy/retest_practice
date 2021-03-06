#include<stdio.h>

int main()
{
	int a = 100, b = 110;
	int* pointer_1, * pointer_2;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("a=%d,b=%d\n", a, b);
	printf("*1=%d,*2=%d", *pointer_1, *pointer_2);
	return 0;
}