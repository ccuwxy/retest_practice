#include<stdio.h>
#include<math.h>
int main()
{
	float r, p;
	int n;
	scanf("%f%d", &r, &n);
	p = pow((1.0 + r), n);
	printf("%.2f", p);
	return 0;
}