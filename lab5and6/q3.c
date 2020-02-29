#include<stdio.h>
int largest(int x)
{
	int large=0,rem=0;
	while(x>0)
	{
		rem=x%10;
		if(rem>large)
		{
			large=rem;
		}
		x=x/10;
	}
	printf("largest digit is %d \n",large);
}

int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	largest(a);
}
