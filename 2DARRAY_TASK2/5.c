#include<stdio.h>
int search(int n,int arr[n],int f)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(f==arr[i])
			{
				return i;
				break;
			}
		}
	}
}
int min(int n,int brr[n])
{
	int min=brr[0];
	for(int i=0;i<n;i++)
	{
		if(min>brr[i])
		{
			min=brr[i];
		}
	}
	return min;
}
int task(int n,int arr[n][n])
{
	int i,s=0,d,k=0,l=n,index,crr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	while(n>0)
	{
		int brr[n];
		for(i=0;i<n;i++)
		{
			brr[i]=min(n,arr[i]);
		}
		d=min(n,brr);
		index=search(n,brr,d);
		k=search(n,arr[index],d);
		for(i=0;i<n;i++)
		{
			for(int j=k;j<n-1;j++)
			{
				arr[i][j]=arr[i][j+1];
			}
		}
		for(i=index;i<n-1;i++)
		{
			for(int j=0;j<n;j++)
			{
				arr[i][j]=arr[i+1][j];
			}
		}
		printf("%c gets a value %d(value of the attained job is printed)\n",crr[index],d);
		for(i=index;i<n;i++)
		{
			crr[i]=crr[i+1];
		}
		n--;
		s=s+d;
	}
	printf("The minimum sum is %d\n",s);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	task(n,arr);
}
