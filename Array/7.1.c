
//KUMAR ANURAG
//19130

#include<stdio.h>
int oddnumbers(int [],int[],int,int);
int main()
{
    int num1,num2;
    printf("Enter Size num1 and num2");
    scanf("%d %d",&num1,&num2);
    int a[num1],b[num2],i,j;
    printf("Enter numbers in array 1:");
    for(i=0;i<num1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter numbers in array 2:");
    for(i=0;i<num2;i++)
    {
        scanf("%d",&b[i]);
    }


        oddnumbers(a,b,num1,num2);


return 0;
}
int oddnumbers(int a[],int b[],int num1,int num2)
{
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0;j<num2;j++)
        {
            if((a[i]+b[j]%2)!=0)
            {
                printf("{%d,%d} \t ",a[i],b[j]);
            }
        }
            
    }
}