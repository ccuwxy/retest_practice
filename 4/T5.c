#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	
	while (1)
	{
		printf("Please input num:\n");
		scanf("%d", &num);
		if (num >= 1000)
			continue;
		printf("%d", (int)sqrt(num));
		break;
	}
	return 0;
}