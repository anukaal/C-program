#include<stdio.h>
int sum_natural(int x)
{
	int ans;
	ans=(x*(x+1)/2);
	printf("Answer is %d \n",ans);
}
void main()
{
	int a;
	printf("Enter the number");
	scanf("%d" ,&a);
	sum_natural(a);
}
