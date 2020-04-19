
//KUMAR ANURAG
//19130

#include <stdio.h>
int swap(int x,int y,int a[],int n)
{
    int temp,j;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}
int main()
{
    int n,i,j,largest,smallest,lindex,sindex;
    largest=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    smallest=a[0];
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>largest)
        {
            largest=a[i];
            lindex=i;
        }
        if (smallest>a[i])
        {   
            smallest=a[i];
            sindex=i;
        }
    }
    swap(lindex,sindex,a,n);
    
}