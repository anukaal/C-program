#include<stdio.h>
int wiggilypath1(int r,int c,int a[r][c])
{
    int flag=1,i,ro=0;
    while(ro<r)
    {
        if(flag==0)
        {
            for(i=c-1;i>=0;i--)
            printf("%d ",a[ro][i]);
            flag=1;
        }
        else if(flag==1)
        {
            for(i=0;i<c;i++)
            printf("%d ",a[ro][i]);
            flag=0;
        }
        ro++;
    }
    printf("\n");
}
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    wiggilypath1(r,c,a);
    return 0 ;
}
