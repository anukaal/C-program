#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int *ptr=a+2;
    
    for(int i=0;i<5;i++)
    {
        *ptr= *ptr * 2;
        --ptr;
    }
    
    for(int i =0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
