#include<stdio.h>
int main(){
int binary[32];
int n;
int i=0;
scanf("%d",&n);
if(n==0)
printf("0");
else{

while(n>0){
binary[i]=n%2;
n/=2;
i++;
}}
for(int j=i-1;j>=0;j--){
printf("%d",binary[j]);}
return 0;}
