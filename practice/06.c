#include<stdio.h>
#include<string.h>
int main()
{
	char a[80] = "AB", b[80] = "LMNP";
	strcat(a, b);
	int i = 0;
	while (a[i++] != '\0') 
		b[i] = a[i];
	puts(b);
	return 0;
}