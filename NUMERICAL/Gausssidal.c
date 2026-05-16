#include<stdio.h>
#define f1(x,y,z) ((5.74-7*y+3*z)/12.0)
#define f2(x,y,z) ((49.66-4*x-13*z)/12.0)
#define f3(x,y,z) ((64.8-4*y-12*x)/15.0)
int main(){
    float x0,x1,y0,y1,z0,z1;
    int n;
    printf("Enter the initial guess x0,y0,z0:");
    scanf("%f %f %f",&x0,&y0,&z0);
    printf("Enter the number of iteratio:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x1=f1(x0,y0,z0);
        y1=f2(x1,y0,z0);
        z1=f3(x1,y1,z0);
        x0=x1;
        y0=y1;
        z0=z1;

    printf("The solution in %d th iteration is %f %f %f",i,x0,y0,z0);}
return 0;}
