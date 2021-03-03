#include<stdio.h>

int main()
{
	char c1, c2, c3, c4, c5;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
	int temp = 4;
	printf("%c%c%c%c%c\n", c1 + temp, c2 + temp, c3 + temp, c4 + temp, c5 + temp);
	putchar(c1 + temp);
	putchar(c2 + temp);
	putchar(c3 + temp);
	putchar(c4 + temp);
	putchar(c5 + temp);
	return 0;
}