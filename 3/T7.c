#include<stdio.h>
#define PI 3.14159265
int main()
{
	float r;
	float h;
	float l, s, ss, v, vv;

	scanf("%f%f", &r, &h);
	l = PI * r * 2;
	s = PI * r * r;
	ss = 4 * PI * r * r;
	v = 4.0 / 3 * PI * r * r * r;
	vv = s * h;

	printf("Բ�ܳ�:%.2f\n",l);
	printf("Բ���:%.2f\n", s);
	printf("Բ������:%.2f\n", ss);
	printf("Բ�����:%.2f\n", v);
	printf("Բ�����:%.2f", vv);

	return 0;
}