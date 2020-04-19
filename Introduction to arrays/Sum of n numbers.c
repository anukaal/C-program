#include <stdio.h>

int main()
{
    int x,n,s=0;
    printf("The program for adding n numbers\n");
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter the elements");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s=s+x;
    }
    
    printf("Sum of the elements is %d",s);
    
    
}
