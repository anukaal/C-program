#include<stdio.h>
int sum(int n,int d,int arr[n][d],int brr[n]){
	int i,j;
	for(i=0;i<n;i++)
	{
		brr[i]=0;
		for(j=0;j<d;j++)
		{
			brr[i]=brr[i]+arr[i][j];
		}
	}
}
int main(){
	int n,d;
	printf("Number of rows: ");
	scanf("%d",&n);
	printf("Number of columns: ");
	scanf("%d",&d);
	int i,j,arr[n][d],brr[n];
	printf("Matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	sum(n,d,arr,brr);
	int k;
	int maxi=brr[0];
	for(i=0;i<n;i++)
	{
		if(brr[i]>maxi)
		{
			maxi=brr[i];
			k=i;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\tsum of this row: %d\n",brr[i]);
	}
	printf("the row with maximum sum is\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[k][i]);
	}
	printf("\n");
	printf("and the value is %d",maxi);
	printf("\n");
}
