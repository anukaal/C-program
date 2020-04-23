
//KUMAR ANURAG
//19130

#include<stdio.h>
int main()
{
    int num1,num2,e=1;
    printf("Enter size of num1 and num 2");
    scanf("%d %d", &num1, &num2);
    int a[num1],b[num2],i,j,c[num1+num2],d;
    for(i=0;i<num1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num2;i++)
    {
        scanf("%d",&b[i]);
    }
    c[0]=a[0];
    d=(a[num1-1]>b[num2-1])?a[num1-1]:b[num2-1];
    while(c[e-1]<d)
    {
        if(e%2!=0)
        {
            e=e+1;
            for(i=0;i<num2;i++)
            {
                if(c[e-2]<b[i])
                {
                    c[e-1]=b[i];
                    break;
                }
            }
        }
        else
        {
            e=e+1;
            for(i=0;i<num1;i++)
            {
                if(c[e-2]<a[i])
                {
                    c[e-1]=a[i];
                    break;
                }
            }
        }
        
    }
    for(i=0;i<e;i++)
    {
        printf("%d  ",c[i]);
    }
return 0;
}
