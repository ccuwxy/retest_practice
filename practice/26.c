#include<stdio.h>

struct st
{
	char name[8];
	int num;
	float s[4];
}student[5] = { "a",1,{1,2,3,4},
			"a",2,{1,2,3,4},
			"a",3,{1,2,3,4},
			"a",4,{1,2,3,4},
			"a",5,{1,2,3,4}};

int main()
{
	FILE* fp;
	if((fp = fopen("stu.txt", "w"))==NULL)
		printf("not open");
	printf("%d",fwrite(&student[0], 1*sizeof(struct st), 1, fp));
	struct st stu[5];
	fclose(fp);
	if ((fp = fopen("stu.txt", "w")) == NULL)
		printf("not open");
	fread(&stu[0],1 * sizeof(struct st), 1, fp);
	for (int i = 0; i < 1; i++)
		printf("%s %d\n", stu[i].name, stu[i].num);
	fclose(fp);
	return 0;
}