#include<stdio.h>
int worker_job(int arr[100][100]);
int n;
int main(){
int arr[100][100];
printf("enter the value for n: ");
scanf("%d",&n);
printf("enter the '%d' workers and jobs:\n",n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
}
}
printf("the minimum cost required is: %d\n",worker_job(arr));
return 0;
}
int worker_job(int arr[100][100]){
int s=0,min,ind;
for(int i=0;i<n;i++){
min=arr[i][0];
for(int j=0;j<n;j++){
if(arr[i][j]<min && j!=ind){
min=arr[i][j];
ind=j;
}
}
s+=min;
}
return s;
}
