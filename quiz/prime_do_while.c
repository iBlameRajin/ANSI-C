#include<stdio.h>
int main(){
    int n;
    int a=0;
    scanf("%d",&n);
   int i=2;
  do{
        if(n%i==0){
            a=1;
            break;}
            i++;
    }
    while(i<n);
    if(a==1)
        printf("This is a composite number");
    else
        printf("This is a prime number");
return 0;}
