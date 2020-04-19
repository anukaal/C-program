#include <stdio.h>

int main()
{
    int i=6, *j,k; //Declares an integer i, pointer j, int k
    j= &i; //Assign address of i to ptr j. Now j points to i
    printf("%d\n",i**j*i+*j); //Following precedence rule multiplication happens first
    return 0;
    
}
