#include<stdio.h>

int main()
{
	void action1(int, int), action2(int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch)
	{
	case 'a':
	case 'A':
		action1(a, b);
		break;
	case 'b':
	case 'B':
		action2(a, b);
		break;
	default:
		putchar('\a');
	}
	return 0;
}

void action1(int a, int b)
{
	printf("x+y=%d", a + b);
}
void action2(int a, int b)
{
	printf("x-y=%d", a - b);
}