
//KUMAR ANURAG
//19130

#include <stdio.h>
#define n 50
int INSERT (int x);
int PEEP();
int DELETE();
int DISPLAYDECK();
int top=-1;
int stack[n];
int main()
{
    int choice,num,y;
    do
    {
        printf("Enter your choice\n 1.Insert\n 2.See next \n 3.Delete\n 4.Display stack\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :printf("enter your car no.");
                scanf("%d",&num);
                INSERT(num);
                break;
        
        case 2: printf("the next car in stack is : %d ",PEEP());
                break;
        
        case 3: DELETE();
                break;
        
        case 4: DISPLAYDECK();
                break;
        
        default:printf("invalid choice");
        }
        printf("Do want to continue - 1 or 0?");
        scanf("%d",&y);
    } while (y==1);
    
    
}

int INSERT (int x)
{
    if(top>=n-1)
    {
        printf("overflow");
    }
    else
    {
        top+=1;
        stack[top]=x;
    }
    

}
int PEEP()
{
    return stack[top];
}

int DELETE()
{
    if(top<=-1)
        printf("no cars in stack");
    else
    {
        top-=1;
    }
    
}

int DISPLAYDECK()
{
    int i;
    if(top==-1)
        printf("no cards in stack");
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
            
        }
        
    }
    
}
