#include <stdio.h>
void sort(int matrix[][10],int row,int column);
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
	sort(matrix,row,column);
	
	return 0;
}
void sort(int matrix[][10],int row,int column)
{
	int i = 0,j = column-1,k,l;
	while(i<row && j>=0)
	{
		k = 0,l = column-1;
		while(k<(row-i-1) && l>=(column-j-1))
		{
			if(matrix[k][l]>matrix[k+1][l-1])
			{
				int temp = matrix[k][l];
				matrix[k][l] = matrix[k+1][l-1];
				matrix[k+1][l-1] = temp;
			}
			k++,l--;
		}
		i++,j--;
	}
	//Printing the array
	for(i = 0;i<row;i++)
	{
		for(j = 0;j<column;j++)
			printf("%d ",matrix[i][j]);
		printf("\n");
	}
}

