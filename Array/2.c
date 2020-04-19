//KUMAR ANURAG
//19130

#include<stdio.h>
int sum(int [],int);
int main()
{
    int n;
    printf("Enter Size");
    scanf("%d",&n);
    int a[n],i,s=0;
    printf("Enter number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even Positioned elements sum is %d \n",sum(a,n));
    return 0;
}
int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s=s+a[i];
        }
    }
    return s;
}   
