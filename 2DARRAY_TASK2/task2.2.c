#include <stdio.h>
void wigglypath2(int matrix[][10],int row,int column);
int main()
{
	int row,column;
	int matrix[10][10];
	printf("Enter number of rows and number of columns : ");
	scanf("%d %d",&row,&column);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	wigglypath2(matrix,row,column);
	
	return 0;
}
void wigglypath2(int matrix[][10],int row,int column)
{
	int i,j;
	for(j = column-1;j>=0;j--)
	{
		if(j%2 != 0)
		{
			for(i = 0;i<row;i++)
				printf("%d ",matrix[i][j]);
		}
		else
		{
			for(i = row-1;i>=0;i--)
				printf("%d ",matrix[i][j]);
		}
	}
	printf("\n");
}

