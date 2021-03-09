#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* in, * out;
	char ch, infile[10], outfile[10];
	printf("input file name:");
	scanf("%s", infile);
	printf("output file name:");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("can not open input file\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("can not open output file\n");
		exit(0);
	}
	while (!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);

	return 0;
}