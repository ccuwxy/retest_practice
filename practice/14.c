#include<stdio.h>

char fun(char* s)
{
	if (*s >= 'A' && *s <= 'Z')
		*s += 32;
	return *s;
}
int main()
{
	char c[80], * p;
	p = c;
	//scanf("%s", p);
	gets(p);
	while (*p)
	{
		*p = fun(p);
		putchar(*p);
		p++;
	}
	printf("\n");
	return 0;
}