#include<stdio.h>
int bin(int limit1a,int limit1b,int limit0a,int limit0b,int n,int d,int arr[n][d])
{
	int A=0,B=0;
	int brr[n][d];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			if(arr[i][j]==1)
			{
				if((arr[i][j+1]==1)&&((j+1)<d))
				{
					A++;
				}
				if((arr[i][j-1]==1)&&((j-1)>=0))
				{
					A++;
				}
				if((arr[i+1][j]==1)&&((i+1)<n))
				{
					A++;
				}
				if((arr[i+1][j+1]==1)&&((i+1)<n)&&((j+1)<d))
				{
					A++;
				}
				if((arr[i+1][j-1]==1)&&((i+1)<n)&&((j-1)>=0))
				{
					A++;
				}
				if((arr[i-1][j]==1)&&((i-1)>=0))
				{
					A++;
				}
				if((arr[i-1][j+1]==1)&&((i-1)>=0)&&((j+1)<d))
				{
					A++;
				}
				if((arr[i-1][j-1]==1)&&((i-1)>=0)&&((j-1)>=0))
				{
					A++;
				}
				if((A>=limit1a)&&(A<=limit1b))
				{
					brr[i][j]=1;
					A=0;
				}
				else
				{
					brr[i][j]=0;
					
					A=0;
				}
			}
			else
			{
				if((arr[i][j+1]==1)&&((j+1)<d))
				{
					B++;
				}
				if((arr[i][j-1]==1)&&((j-1)>=0))
				{
					B++;
				}
				if((arr[i+1][j]==1)&&((i+1)<n))
				{
					B++;
				}
				if((arr[i+1][j+1]==1)&&((i+1)<n)&&((j+1)<d))
				{
					B++;
				}
				if((arr[i+1][j-1]==1)&&((i+1)<n)&&((j-1)>=0))
				{
					B++;
				}
				if((arr[i-1][j]==1)&&((i-1)>=0))
				{
					B++;
				}
				if((arr[i-1][j+1]==1)&&((i-1)>=0)&&((j+1)<d))
				{
					B++;
				}
				if((arr[i-1][j-1]==1)&&((i-1)>=0)&&((j-1)>=0))
				{
					B++;
				}
				if((B>=limit0a)&&(B<=limit0b))
				{
					brr[i][j]=1;
					B=0;
				}
				else
				{
					brr[i][j]=0;
					B=0;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",brr[i][j]);
			arr[i][j]=brr[i][j];
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int n,d,limit1a,limit1b,limit0a,limit0b,k;
	scanf("%d %d",&n,&d);
	scanf("%d %d %d %d",&limit1a,&limit1b,&limit0a,&limit0b);
	int arr[n][d];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		bin(limit1a,limit1b,limit0a,limit0b,n,d,arr);
	}
}
