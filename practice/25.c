#include<stdio.h>
/*
struct bit
{
	unsigned a_bit;
	unsigned b_bit;
	unsigned c_bit;
	unsigned d_bit;
	unsigned e_bit;
	unsigned word;
};
*/
struct bit
{
	unsigned a_bit : 2;
	unsigned b_bit : 2;
	unsigned c_bit : 1;
	unsigned d_bit : 1;
	unsigned e_bit : 2;
	unsigned word : 8;
};
int main()
{
	struct bit* p;
	struct bit b;
	printf("%d", sizeof(b));
	unsigned int modeword;
	printf("Enter the mode word(HEX):");
	scanf("%x", &modeword);
	p = (struct bit*)&modeword;
	printf("%d\n", p->a_bit);
	printf("%d\n", p->b_bit);
	printf("%d\n", p->c_bit);
	printf("%d\n", p->d_bit);
	printf("%d\n", p->e_bit);
	return 0;
}