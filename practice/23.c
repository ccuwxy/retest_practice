#include<stdio.h>
union pw {
	int i;
	char ch[2];
}a;
int main() {
	a.ch[0] = 13;
	a.ch[1] = 0;
	printf("%d", a.i);
}