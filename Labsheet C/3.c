
//KUMAR ANURAG
//19130

#include <stdio.h>
int sort(int a[],int n,int k)
{
    int temp,i,j;
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
   printf("%d",a[k-1]);

}
int main()
{
    int n,i,k;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    printf("enter k");
    scanf("%d",&k);
    int sorted=sort(a,n,k);
    
}
