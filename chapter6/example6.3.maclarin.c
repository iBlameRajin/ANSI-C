#define accuracy 0.0001
#include<stdio.h>
int main(){
int n,count;
float term,sum,x;
scanf("%f",&x);
sum=term=count=n=1;
while(n<100){
term=term*(x/n);
     sum=sum+term;
       if(term<accuracy)
break;
    else
        n=n+1;
count=count+1;}
printf("%d %f",count,sum);
}
