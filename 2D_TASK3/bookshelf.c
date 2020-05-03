
//KUMAR ANURAG
//19130

#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j,d=0;
	char arr[a][b][100],brr[100];
	getchar();
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			fgets(arr[i][j],100,stdin);
		}
	}
	fgets(brr,100,stdin);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(strcmp(arr[i][j],brr)==0)
			{
				d=1;
				printf("The book is at %d(cupboard number) and %d(rack number)\n",i+1,j+1);
				break;
			}
			else if(i==a-1)
			{
				d=0;
			}
		}
	}
	if(d==0)
	{
		printf("No such book in this library\n");
	}
}
