#include <stdio.h>

int main(){
	float a,b,ans;
	scanf("%f",&a);
	scanf("%f",&b);
	ans=(a>b)?a:b;
	printf("Largest is = %.2f\n",ans);
	return 0;
}
