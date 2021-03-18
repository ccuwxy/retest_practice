#include<stdio.h>

int main()
{
	int x[10] = { 0,1,2,3,4,5,6,7,8,9 }, * p;
	p = x;
	printf("%x\n", p);
	printf("%x\n", p+9);
	printf("%d\n", (p = x + 3, *p));
	printf("%d\n", (p = x + 3, *p++));
	printf("%d\n", (p = x + 3, *++p));
	printf("%d\n", (p = x + 3, *(++p)));
	printf("%d\n", (p = x + 3, *(p++)));
/*	int i = 1;
	int s[4][6], t[6][4], (*p)[6];
	p = t;
	p = s;
	p = s[i];
	p = t[i];

	float b[3][5], * p[3];
	p[0] = b[0];
	p[2] = *b + 4;
	
	int i = 1, j = 1;
	int s[2][3] = { 0 };
	int(*p)[3];
	p = s;
	printf("%d", ((p + i) + j));*/
	return 0;
}