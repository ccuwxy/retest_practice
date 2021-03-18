#include<stdio.h>

struct p
{
	char name[20];
	int age ;
	int sex ;

}*pp;
int main()
{
	char name[20];
	scanf("%s", name);
	struct p p1 = { "abc",0,1 };
	pp = &p1;
	scanf("%d", &(pp->age));
	printf("%d", pp->age);
	return 0;
}