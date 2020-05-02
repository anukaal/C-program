#include <stdio.h>
void wigglypath1(int matrix[][10],int row,int column);
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
	wigglypath1(matrix,row,column);
	
	return 0;
}
void wigglypath1(int matrix[][10],int row,int column)
{
	int flag=1,rowcnt=0;
	while(rowcnt<row)
	{
		if(flag==0)
		{
			for(int i=column-1;i>=0;i--)
			printf("%d ",matrix[rowcnt][i]);
			flag=1;
		}
		else if(flag==1)
		{
			for(int i=0;i<column;i++)
			printf("%d ",matrix[rowcnt][i]);
			flag=0;
		}
		rowcnt++;
	}
}
			
