#include<stdio.h>
int maxi(int n,int brr[n])
{
	int maxi=brr[0];
	for(int i=0;i<n;i++)
	{
		if(brr[i]>maxi)
		{
			maxi=brr[i];
		}
	}
	return maxi;
}
int sum(int n,int d,int arr[n][d],int brr[n])
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		brr[i]=arr[i][d-i-1];
		k=k+brr[i];
	}
	return k;
}
int main()
{
	int n,d;
	printf("Number of rows: ");
	scanf("%d",&n);
	printf("NUmber of columns: ");
	scanf("%d",&d);
	int arr[n][d],brr[n];
	printf("Matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int k=sum(n,d,arr,brr);
	int max=maxi(n,brr);
	printf("sum of the anti-diagonal elements is %d\n",k);
	printf("maximum anti-diagonal element is %d",max);
	printf("\n");
}
