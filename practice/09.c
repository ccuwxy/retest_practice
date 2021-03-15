#include"stdio.h"
#define ADD(x) x+x
#define PI 3.14159
#define pI 333
#define S(r) PI*(r)*(r)
main()
{
	int m = 1, n = 2, k = 3;
	int sum = ADD(m + n) * k;
	printf("%d ", sum);
	printf("%f", PI);
	int a = 1;
	int area = S(a);
}