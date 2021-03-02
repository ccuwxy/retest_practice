#include<stdio.h>
#define PI 3.14
int main()
{
	enum week
	{
		Mon, Tue, Wed, Thur, Fri, Sat, Sun
	};
	printf("%f\n", 1.0 / 3.0);
	int a = 4;
	printf("%d\n",sizeof(a));
	char c = '?';
	printf("%d %c\n", c, c);
	char cn = 255;
	printf("%d\n", cn);
	return 0;
}