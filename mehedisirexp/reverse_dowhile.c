#include<stdio.h>
int main(){
    int n;
    int rev=0;
    scanf("%d",&n);
    do{
    rev=rev*10+(n%10);
    n/=10;}
    while(n!=0);
    printf("%d",rev);
return 0;
}
