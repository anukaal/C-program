#include<stdio.h>
int sort(int n,int arr[n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j+1]=arr[j+1]-arr[j];
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
			}
		}
	}
}
int antisort(int n,int d,int arr[n][d],int brr[n])
{
	for(int i=0;i<n;i++)
	{
		brr[i]=arr[i][d-i-1];
	}
	sort(n,brr);
	for(int i=0;i<n;i++)
	{
		arr[i][d-i-1]=brr[i];
	}
}
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	int arr[n][d],brr[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	antisort(n,d,arr,brr);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
