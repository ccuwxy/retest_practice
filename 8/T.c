#include<stdio.h>

int main()
{
	/*
	int a = 1, b = 2, c = 3, d = 4, m = 2, n = 2;
	(m = a > b) && (n = c > b);
	printf("%d\n", m);
	printf("%d", n);

	int a, b, c;
	a = b = c = 1;
	++a || ++b && ++c;
	printf("%d %d", a, b);

	int a = 1, b=2, c = 2,t;
	while (a < b < c)
	{
		t = a;
		a == b;
		c++;
	}
	printf("%d %d %d ", a, b, c);
	int t = 0;
	while (printf("*"))
	{
		t++;
		if (t < 3)
			break;
	}

	int a = 1, b = 10;
	do {
		b -= a;
		a++;
	} while (b-- < 0);
	printf("%d %d", a, b);
	int i = 100;
	while (1)
	{
		i = i % 100 + 1;
		if (i > 100)
			break;
	}
	for (;;);
	int k = 0;
	do { ++k; } while (k >= 0);
	int s = 36;
	while (s);
	--s;
	int x = 0,y = 0;
	while (x < 15)
		y++, x += ++y;*/
	char c;
	int v0 = 0, v1 = 0, v2 = 0;
	do {
		switch (c=getchar())
		{
		case 'a':case 'A':
		case 'e':case 'E':
		case 'i':case 'I':
		case 'o':case 'O':
		case 'u':case 'U':v1++;
		default:v0++; v2++;
		}
	} while (c != '\n');
	printf("%d %d %d", v0, v1, v2);
	return 0;
}