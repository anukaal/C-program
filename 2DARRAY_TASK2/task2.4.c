#include<stdio.h>
void binary_transformation(int arr[100][100]);
int n,m,a0,a1,b0,b1,k;
int main(){
int arr[100][100];
printf("enter no of rows and columns: ");
scanf("%d %d",&n,&m);
printf("for the matrix transformation enter the values of a1,b1,a0,b0 and k:\n");
scanf("%d %d %d %d %d",&a1,&b1,&a0,&b0,&k);
printf("enter elements of the matrix:\n");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);
}
}
binary_transformation(arr);
printf("the above matrix after transformation is:\n");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}void binary_transformation(int arr[100][100]){
int p=0,c;
int n_arr[100][100];
while(p<k){
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
c=0;
if(i==0 && j==0){
c+=arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(i==0 && j==m-1){
c+=arr[i][j-1]+arr[i+1][j]+arr[i+1][j-1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(i==n-1 && j==0){
c+=arr[i-1][j]+arr[i-1][j-1]+arr[i][j+1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(i==n-1 && j==m-1){
c+=arr[i-1][j]+arr[i-1][j-1]+arr[i][j-1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(i==0){
c+=arr[i][j-1]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j-1]+arr[i+1][j+1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(j==0){
c+=arr[i-1][j]+arr[i][j+1]+arr[i+1][j]+arr[i-1][j+1]+arr[i+1][j+1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(i==n-1){
c+=arr[i-1][j]+arr[i][j-1]+arr[i][j+1]+arr[i-1][j+1]+arr[i-1][j-1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else if(j==m-1){
c+=arr[i-1][j]+arr[i][j-1]+arr[i+1][j]+arr[i-1][j-1]+arr[i+1][j-1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}else{
c+=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
if(arr[i][j]==0 && (c>=a0 && c<=b0)){
n_arr[i][j]=1;
}else if(arr[i][j]==1 && (c<=a1 || c>=b1)){
n_arr[i][j]=0;
}
}
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
arr[i][j]=n_arr[i][j];
}
}
p++;
}
}
