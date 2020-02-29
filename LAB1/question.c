#include <stdio.h>
int main()
{ 
	int a,b;
	printf("Enter the first number= ");
	scanf("%d" ,&a);
	printf("Enter the second number= ");
	scanf("%d" ,&b);
	printf("sum is a+b=%d\n" ,a+b);
	printf("difference is a-b=%d\n" ,a-b);
	printf("product is a*b=%d\n" ,a*b);
	printf("quotient is a/b=%d\n" ,a/b);
	printf("remainder is a%b=%d\n" ,(a%b));
	
	return 0;
}
