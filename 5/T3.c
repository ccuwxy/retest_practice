#include<stdio.h>

int main()
{
	int p, r, m, n, temp;
	scanf("%d%d", &n, &m);
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	p = n * m;
	while (m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("���Լ����%d\n", n);
	printf("��С��������%d\n", p / n);
	return 0;
}