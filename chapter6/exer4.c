#include<stdio.h>
int main(){
int m;
scanf("%d",&m);
int fir=1;
int sec=1;
int fib;
int count=1;
do{
fib=fir+sec;
printf("%d",fir);
fir=sec;
sec=fib;
count++;
}
while(count<=m);
return 0;}
