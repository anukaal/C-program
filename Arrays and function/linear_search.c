#include <stdio.h>
void search(int[],int,int);
int main()
{
    const int SIZE=100;
    int a[SIZE],n,i,element;
    printf("Program to search element in an array\n");
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("Enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&element);
    search(a,n,element);
}
void search(int A[],int limit,int element)
{
    int i; 
    int found=0;
    for(i=0;i<limit;i++)
    {
        if(A[i]==element)
        {
            found=1;
            break;
        }
    }
    
    if(found==1)
    {
        printf("Found %d at %d",element,i);
    }
    else
    {
        printf("Not Found %d in the array",element);
    }
}

