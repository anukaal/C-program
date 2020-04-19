//KUMAR ANURAG
//19130

#include <stdio.h>
int sort(int a[],int n)
{
    int temp,i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(k=0;k<n;k++)
        printf("%d\t",a[k]);
}
int main()
{
     int n,i;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter values");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
}