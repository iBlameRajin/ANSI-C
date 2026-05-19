#include<stdio.h>
int fact(int i){
int a=1;
for(int j=1;j<=i;j++){
    a=a*j;

}
 return a;}
int ncr(int i,int k){
int c=fact(i)/(fact(k)*fact(i-k));
return c;}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n+1-i;j++){
                printf(" ");
            }
        for(int k=0;k<=i;k++){
            printf("%d ",ncr(i,k));
        }printf("\n");
    }
return 0;}
