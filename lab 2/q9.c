#include <stdio.h>

int main(){
	int a,b,c,largest;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	largest=(a>b)?(a>c)?a:(b>c)?b:c:c;
	printf("%d is Largest\n",largest);
	return 0;
}
