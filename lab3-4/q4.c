#include<stdio.h>
int main()
{int x,y,z,a,b;
scanf("%d%d%d",&x,&y,&z);
a=x+y+z;
b=a/3;
if (a>99&&a<201){printf("sum is in allowed range");}
else {printf("sum has exceeded the range");}
printf(" \n %d is the avg of given no.s ",b);
return 0;}

