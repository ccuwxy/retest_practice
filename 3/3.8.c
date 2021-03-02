#include<stdio.h>

int main()
{
	char a = 'B', b = 'O', c = 'Y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');

	int aa = 66, bb = 79, cc = 89;
	putchar(aa);
	putchar(bb);
	putchar(cc);
	putchar('\n');

	putchar('\101');
	putchar('\'');
	putchar('\015');
	return 0;
}