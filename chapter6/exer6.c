#include<stdio.h>
int main(){
float p,r,n;
scanf("%f %f %f",&p,&r,&n);
for(int j=1;j<=n;j++){
p=p*(1+r/100);
}
printf("%f",p);
return 0;}
