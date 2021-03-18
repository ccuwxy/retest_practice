#include<stdio.h>

struct s
{
	int i1;
	struct s* i2;
};
int main()
{
	static struct s a[3] = { 5,&a[1],7,&a[2],9,'\0' }, * ptr;
	ptr = a[0].i1;

	printf("%d", ++ptr->i1);
	printf("%d", ptr++->i1);
	return 0;
}