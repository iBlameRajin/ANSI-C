#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a;
    float avg=0;
    for(int i=1;i<=n;i++){
            scanf("%d",&a);
        sum=sum+a;
    }
    avg=sum/n;
    printf("%f",avg);
return 0;}
