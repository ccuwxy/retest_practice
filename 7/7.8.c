#include<stdio.h>
//��ŵ��***
int sum = 0;
int main()
{
	void hanoi(int,char,char,char);
	int m;
	scanf("%d", &m);
	hanoi(m, 'A', 'B', 'C');
	printf("sum=%d", sum);
	return 0;
}

void hanoi(int n, char one, char two, char three)
//��n���̴�one������two�����ƶ���three��
{
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

void move(char x, char y)
{
	printf("%c->%c\n", x, y);
	sum++;
}