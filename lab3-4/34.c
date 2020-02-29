#include<stdio.h>
void main()
{int x,y,z,avg,s;
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
s=x+y+z;
avg=(x+y+z)/3;
printf("%d\n",s);
printf("%d\n",avg);
if(s<=100&&s>=100)
printf("in range");
else
printf("not in range");
}
