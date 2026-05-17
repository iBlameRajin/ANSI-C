#include<stdio.h>
int main(){
    int fib;
    int n;
    scanf("%d",&n);
    int num1=1;
    int num2=1;
    int i=1;
    do{
            printf("%d",num1);
        fib=num1+num2;
         num1=num2;
    num2=fib;


  i++;  }
  while(i<=n);
return 0;}
