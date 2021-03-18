#include<stdio.h>

int main()
{
	union T
	{
		long a[2];
		int b[4];
		char c[8];
	};
	union T a;
	printf("%d", sizeof(char));
	printf("%d", sizeof(a));
	printf("%d", sizeof(a));
	/*union {
		int a;
		long b;
		unsigned char c;
	}m;
	m.b = 0x12345678;
	printf("%x ", m.a);
	printf("%x ", m.c);

	
	union {
		int a[2];
		long b;
		char c[4];
	}s;
	s.a[0] = 0x39;
	s.a[1] = 0x38;
	printf("%lx\n",s.b);
	printf("%c\n", s.c[0]);
	
	union {
		long a;
		int b;
		char c;
	}m;
	printf("%d\n", sizeof(m));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));*/
	return 0;
}