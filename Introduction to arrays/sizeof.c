#include <stdio.h>

int main()
{
    int array[100];
    char name[20];
    float Farray[20];
    double Darray[20];
    
    printf("Size of int: %lu bytes\n",sizeof(name));
    printf("Size of int: %lu bytes\n",sizeof(array));
    printf("Size of int: %lu bytes\n",sizeof(Farray));
    printf("Size of int: %lu bytes\n",sizeof(Darray));
    
}
