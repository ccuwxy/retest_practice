#include<stdio.h>

int main()
{
	char string[81];
	int num = 0, word = 0;
	char c;
	gets(string);
	for (int i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("%d", num);
	return 0;
}