#include <stdio.h>

int main()
{
    const int SIZE=100;
    // array size is fixed once declared statically. So we can declare it as const.
    
    int x[SIZE],n,s=0;
    printf("Program for adding n numbers\n");
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    //Access the array to find sum of the elements
    for (int i=0;i<n;i++)
    {
        s=s+x[i];
    }
    
    printf("Sum of elements %d\n",s);
    //Access array to update the elements by 1
    for(int i=0;i<n;i++)
    {
        x[i]=x[i]+1;
    }
    //Print the array
    for(int i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
    
}
