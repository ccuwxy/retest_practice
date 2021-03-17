#include<stdio.h>
#include<string.h>
int main()
{
	char* s = "\ta\017bc";
	for (; *s != '\0'; s++)
		printf("*\n");
	s -= 5;
	char* p1 = s, * p2 = s;
	char c = 'a';
	p2 = c;
	printf("%s", p2);
	printf("len=%d\n", strlen("abcdef"));
	printf("sizeof=%d\n", sizeof("abcdef"));
	printf("sizeof=%d", sizeof("\ta\017bc"));
	/*int* p, i;
	char* q, ch;
	p = &i;
	q = &ch;
	*p = 40;
	*p = *q;

	char* p = "abcdefgh      ";
	p += 3;
	printf("%s", p);
	char s1[] = "string", * s3;
	strcpy(s1, "string1");
	char a[10], * p;
	p = a = "china";
	//printf("%d", strlen(strcpy(p, "ABCD")));
	
	char* s;
	s = "\ta\017bc";
	s += 2;
	printf("%p", s);
	char str[20];
	scanf("%s", &str);
	printf("------------%d",strlen(str));
	char* p;
	scanf("%s", p);
	*/
	//char* s1;
	//scanf("%s", s1);
	//int a = strlen(s);
	//int b = strlen(s1);
	//printf("%d", a);
	//printf("%d", b);
	return 0;
}