#include<stdio.h>
#include<math.h>
int main(){
float sum=1.00;
int i=2;

float prevs;
do{
prevs=sum;

sum=sum+pow(1.00/i,i);
i++;
}
while(sum-prevs>0.000001);
printf("%f",sum);
return 0;}
