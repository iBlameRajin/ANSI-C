#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<9;i++)
        sum=sum+(a[i]*(i+1));
        if(sum%11==a[9])
            printf("valid");
        else
            printf("invalid");
return 0;}
