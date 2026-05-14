#include<stdio.h>
int main(){
float y=1.0;
int i=1;
float sum=1.00;
float prevs;
do{

 prevs=sum;
y=y*i;
i++;
sum=sum+(1.00/y);}
while(sum-prevs>=0.00001);
printf("%f",sum);

 return 0;}
