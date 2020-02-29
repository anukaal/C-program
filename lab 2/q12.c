#include <stdio.h>

int main() {
	long int a,b,c;
	float flt;
	scanf("%ld",&a);
	scanf("%ld",&b);
	scanf("%ld",&c);
	flt=(float)(a+b+c)/3;
	printf("%.2f\n",flt);
	return 0;
}
