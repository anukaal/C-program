#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    printf("Number of elements:%lu",sizeof(arr) / sizeof(arr[0]));
    return 0;
}
