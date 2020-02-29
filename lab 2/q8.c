#include <stdio.h>

int main(){
	int x,n,ans,i;
	ans=1;
	scanf("%d",&x);
	scanf("%d",&n);
	for (i=1; i<=n ; i++){
		ans=ans*x;
	}
	printf("%d\n",ans);	
	return 0;
}
