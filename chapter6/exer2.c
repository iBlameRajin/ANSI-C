#include<stdio.h>
int main(){
int m;
scanf("%d",&m);
int fact=1;
for(int i=1;i<=m;i++){
fact=fact*i;
printf("factorial of %d is %d\n",i,fact);
}
return 0;}
