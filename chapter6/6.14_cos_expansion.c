#include<stdio.h>
#include<math.h>
int main(){
float x,prev;
float term=1;
float total=0;
printf("enter the angle in radian");
scanf("%f",&x);
for(int i=1;;i++){
prev=term;
total+=term;
term =-term*x*x/((2*i)*(2*i-1));

if(fabs(term-prev)<=0.000001){
break;}}
printf("%f",total);
return 0;}
