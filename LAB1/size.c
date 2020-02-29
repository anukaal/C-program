#include <stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char d;
	short e;
	long int f;
	long long int g;
	printf("Size of int: %ld bytes\n",sizeof(a));
	printf("Size of long int: %ld byte\n",sizeof(f));
	printf("Size of long long int: %ld byte\n",sizeof(g));
	printf("Size of float: %ld bytes\n",sizeof(b));
	printf("Size of double: %ld bytes\n",sizeof(c));
	printf("Size of char: %ld byte\n",sizeof(d));
	printf("Size of short: %ld byte\n",sizeof(e));
	return 0;
}
