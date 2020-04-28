#include<stdio.h>
int transpose(int n,int d,int arr[n][d],int brr[d][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<d;j++)
		{
			brr[j][i]=arr[i][j];
		}
	}
}
int main()
{
	int n,d;
	printf("Number of rows: ");
	scanf("%d",&n);
	printf("Number of columns: ");
	scanf("%d",&d);
	int arr[n][d],brr[d][n];
	printf("matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	transpose(n,d,arr,brr);
	printf("Before transpose:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("After transpose:\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}
}
