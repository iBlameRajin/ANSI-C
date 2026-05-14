#include<stdio.h>
int main(){
int a[10];
int b[5];

for(int i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
scanf("%d",&b[i]);
}
for(int i=5,j=0;i<10;i++,j++){
a[i]=b[j];}
for(int i=0;i<10-1;i++){
for(int j=0;j<10-1-i;j++){
if(a[j]>a[j+1]){
int temp =a[j+1];
a[j+1]=a[j];
a[j]=temp;}}}
for(int i=0;i<10;i++){
printf("%d ",a[i]);}
return 0;}
