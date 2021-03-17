#include<stdio.h>
#include<string.h>
int main()
{
	char* s;
	s = "\ta\017bc";
	s += 2;
	printf("%p", s);
	//char* s1;
	//scanf("%s", s1);
	//int a = strlen(s);
	//int b = strlen(s1);
	//printf("%d", a);
	//printf("%d", b);
	return 0;
}