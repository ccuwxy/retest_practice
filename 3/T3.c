#include<stdio.h>
#include<math.h>
int main()
{
	float d, p, r;
	d = 300000, p = 6000, r = 0.01;
	printf("%.1f", (log(p / (p - d * r))) / (log(1.0 + r)));
	return 0;
}