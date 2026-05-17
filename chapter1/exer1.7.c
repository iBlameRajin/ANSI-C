#include<stdio.h>
#define pi 3.1416
int sum(int a,int b){
int s=a+b;
return s;}
int sub(int a,int b){
int S=a-b;
return S;}
int main(){
   int a=20;
   int b=10;
   printf("%d",sum(a,b));
   printf("\n%d",sub(a,b));
return 0;
}
