#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int sum=0;
for(;n!=0;n/=10){
sum=sum*10+n%10;
}
printf("%d",sum);
return 0;}
