#include<stdio.h>
void main()
{int n,c,i,j;
scanf("%d",&n);
char a;
c=65;
a=c;
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		a=c;
      		printf("%c",a);
      		c=c+1;
      	}	
printf("\n");
 }
}
