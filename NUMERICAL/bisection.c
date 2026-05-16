#include<stdio.h>
#include<math.h>
#define f(x) (pow(x,3)-4*x-9)
int main(){
float a,b,p,q,c,r;
int n;
printf("Enter the two inttail value");
scanf("%f %f",&a,&b);
printf("Enter the number of iteration");
scanf("%d",&n);
p=f(a);
q=f(b);
if(p*q<0){
for(int i=1;i<=n;i++){
c=(a+b)/2;
    printf("The root is %f in %d th iteration",c,i);
    r=f(c);
    if(p*r<0)
       {
           
       q=r; b=c;}
       else{
        p=r; a=c;}
}} 
else
printf("no root between %f and %f",a,b);
        return 0;}
