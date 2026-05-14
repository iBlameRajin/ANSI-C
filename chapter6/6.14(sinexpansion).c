#include<stdio.h>
int main(){
float x;
printf("ENter the angle in radian");
scanf("%f",&x);
float term=x;
float prevs;
int i=1;
float sum=0;
do{
prevs=sum;
sum=sum+term;
term=-term*x*x/((2*i)*(2*i+1));
i++;}
while(sum-prevs>0.000001);
printf("%f",sum);
return 0;}
