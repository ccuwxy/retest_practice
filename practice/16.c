#include<stdio.h>
#include<string.h>

fun(char* s)
{
	char a[7];
	s = a;
	strcpy(a, "look");
}
int main()
{
	char* p;
	fun(p);
	puts(p);

	return 0;
}