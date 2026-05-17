#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf(" ");
            j++;
        }
        int k=1;
        while(k<=(n+1-i)){
            printf("*");
            k++;
        }printf("\n");
        i++;
    }
return 0;}
