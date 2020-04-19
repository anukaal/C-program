//KUMAR ANURAG
//19130

#include <stdio.h>

int bin_search(int a[],int n ,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

void k_close(int a[],int n, int x, int k)
{
    int i,j;
    int pos=bin_search(a,n,x);
    if(pos==-1)
    {
        printf("\nGiven element x is not found in the array");
    }
    else if(k>n-1)
    {
        printf("\n K cannot be greater than n-1");
    }
    else
    {
        i=pos+1;
        j=pos-1;
        printf("\nK closest elements to x : ");
        while(k>0)
        {
            if(k==1)
            {
                if(j<0)
                {
                    printf("%d ",a[i]);
                    break;
                }
                else if(i>n-1)
                {
                    printf("%d ",a[j]);
                    break;
                }
                if(a[i]-x<x-a[j])
                {
                    printf("%d ",a[i]);
                    break;
                }
                else
                {
                    printf("%d ",a[j]);
                    break;
                }    
            }
            if(i!=n && i<n)
            {
                printf("%d ",a[i]);
                i++;
                k--;
            }
            if(j!=0 && j>0)
            {
                printf("%d ",a[j]);
                j--;
                k--;
            }
        }
    }
}
int main()
{
    int n,i,k,x;
    printf("Enter number of elements to be inserted into the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value of x : ");
    scanf("%d",&x);
    printf("\nEnter value of k : ");
    scanf("%d",&k);
    k_close(a,n,x,k);}