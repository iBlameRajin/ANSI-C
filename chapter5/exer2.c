#include<stdio.h>
int main(){
    int sum=0,count=0;
for(int i=101;i<=200;i++){
    if(i%7==0){
       count++;
       printf("%d\n",i);
    sum=sum+i;

}}
printf("%d",sum);
printf("\n%d",count);
return 0;}
