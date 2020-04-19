
//KUMAR ANURAG
//19130

#include<stdio.h>
void right_rotes(int [],int);
void left_rotes(int [],int);
int main()
{
    int n,r,temp,j,d,i;
    printf("Enter Size");
    scanf("%d",&n);
    int a[n];
    printf("enter Numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Case 1: Right Rotes \n");
    printf("Case 2: Left Rotes \n");
    printf("Choose Between case 1 or 2 \n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:printf("Enter the no. of Rotes");
            scanf("%d",&r);
                for(j=0;j<r;j++)
                {
                    right_rotes(a,n);
                }

                for(j=0;j<n;j++)
                {
                    printf("%d  ",a[j]);
                }
                break;
        case 2:printf("Enter the no. of rotes");
            scanf("%d",&r);
            for(j=0;j<r;j++)
            {
                left_rotes(a,n);
            }
            for(j=0;j<n;j++)
            {
                printf("%d  ",a[j]);
        
            }
            break;
    }   
        return 0;
}
void right_rotes(int a[],int n)
{
    int i,temp;
    temp=a[n-1];
    for(i=n-1;i>0;i++)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
}
void left_rotes(int a[],int n)
{
    int temp,i;
    temp=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}