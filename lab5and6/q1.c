#include<stdio.h>
int sum(int x,int y)
{
	return(x+y);
}

void main()
{
	int a,b,ans;
	printf("Enter the two number ");
	scanf("%d %d" ,&a,&b);
	ans=sum(a,b);
	printf("Sum of two number is %d \n" ,ans);
}  
