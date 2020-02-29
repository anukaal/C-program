#include<stdio.h>
void swap(int x, int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Numbers after swap inside the function %d and %d \n",x,y);
}

void main()
{
	int a,b;
	printf("Enter the numbers to swap");
	scanf("%d %d" ,&a,&b);
	swap(a,b);
}

