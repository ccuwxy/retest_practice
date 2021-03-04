#include<stdio.h>
#include<math.h>
int main()
{
	int sign = 1;
	double pi = 0, n = 1.0, term = 1.0;
	while (fabs(term) >= 1e-8)
	{
		pi += sign * term;
		sign = -sign;
		n += 2;
		term = 1.0 / n;
	}
	printf("%.7lf", pi*4);
	return 0;
}