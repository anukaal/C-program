#include <stdio.h>

int main()
{
    int a= 5; //integer declaration
    int *ptr; //Pointer integer declared
    ptr = &a; //ptr is assigned the address of integer so it points to a
    *ptr = *ptr*3; //(*ptr): deferencing the ptr ie access the content pointed by ptr
    printf("%d",a);
    
    return 0;
    
}
