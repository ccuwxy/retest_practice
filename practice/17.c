#include<stdio.h>
#include<ctype.h>

fun(char* p)
{
	int i, t;
	char ts[81];
	for (i = 0, t = 0; p[i] != '\0'; i += 2)
	{
		if (!isspace(*p + i) && (*(p + i) != 'a'))
			ts[t++] = toupper(p[i]);
	}
	ts[t] = '\0';
	strcpy(p, ts);
}
int main()
{
	char str[81] = { "a b c d ef g" };
	fun(str);
	puts(str);
	printf("111");
	return 0;
}