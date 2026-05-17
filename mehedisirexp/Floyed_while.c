#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("%d",(i+j+1)%2);
            j++;
        }printf("\n");
        i++;
    }
return 0;}
