#include<stdio.h>
#define LETTER 0
main()
{
	char str[20] = "C language", c;
	int i = 0;
	while ((c = str[i]) != '\0')
	{
		i++;
#if 0
		if (c > 'a' && c <= 'z')
			c -= 32;
#else
		if (c >= 'A' && c <= 'Z')
			c += 32;
#endif
		printf("%c", c);
	}
}