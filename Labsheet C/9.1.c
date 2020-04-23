
//KUMAR ANURAG
//19130

#include<stdio.h>
void REGISTER(int [],int,int);
int WHONEXT(int []);
void DELETE(int [],int);
int DISPLAY_QUEUE(int [],int);
int main()
{
    const int SIZE=100;
    int n,i,r,a[SIZE];
    printf("Enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Choose from above option given:");
    printf("1. REGISTER \n 2. WHONEXT \n 3. DELETE \n 4. DISPLAY_QUEUE \n 5. EXIT \n");
    do
    {
        printf("Enter your Option \n");
        scanf("%d",&r);
        switch(r)
        {
            case 1:printf("Enter the no. to be register \n");
                    scanf("%d",&r);
                    REGISTER(a,n,r);
                    break;
            
            case 2:WHONEXT(a);
                    break;
            case 3:DELETE(a,n);
                    break;
            case 4:DISPLAY_QUEUE(a,n);
                    break;
            case 5:printf("Exit \n");
                    break;



        }
    }while(r!=5);
    return 0;

    

}
void REGISTER(int a[],int n,int r)
{
    a[n]=r;
    n=n+1;
}
int WHONEXT(int a[])
{
    printf("%d \n", a[0]);

}
void DELETE(int a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        a[i-1]=a[i];
    }
    n=n-1;
}
int DISPLAY_QUEUE(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}