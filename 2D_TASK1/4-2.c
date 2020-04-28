#include<stdio.h>
int upper(int n,int d,int arr[n][d])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			arr[i][j]=0;
		}
	}
}
int sum(int n,int d,int arr[n][d])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	return sum;
}
int main(){
	int n,d;
	printf("Number of rows: ");
	scanf("%d",&n);
	printf("Number of columns: ");
	scanf("%d",&d);
	int arr[n][d];
	printf("Matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	int l=sum(n,d,arr);
	printf("sum of the elements before transformation: %d\n",l);
	upper(n,d,arr);
	int k=sum(n,d,arr);
	printf("After converting to upper triangle:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("sum of the elements after transformation: %d\n",k);
}
