#include<stdio.h>
#define N 3
struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};
int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu);
	struct Student stu[N], * p = stu;
	input(p);
	print(max(p));
	return 0;
}

void input(struct Student stu[])
{
	int i;
	printf("�������ѧ������Ϣ��ѧ�š����������ſγɼ���\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
	}
}

struct Student max(struct Student stu[])
{
	int m = 0;
	for (int i = 0; i < N; i++)
	{
		if (stu[i].aver > stu[m].aver)
			m = i;
	}
	return stu[m];
}

void print(struct  Student stud)
{
	printf("\n�ɼ���ߵ�ѧ����\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%5.1f %5.1f %5.1f\nƽ���ɼ���%6.2f",
		stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}