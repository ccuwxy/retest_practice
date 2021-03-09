#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp;
	char ch, filename[20];
	scanf("%s", filename);
	if ((fp = fopen(filename, "r")) == NULL) {
		printf("无法打开文件\n");
		exit(0);
	}
	ch = getchar();

	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}