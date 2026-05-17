#include<stdio.h>
#include<math.h>
#define f(x) pow(x,2)-3*x-11
#define df(x) 2*x-3
int main(){
    int n;

float a,b,c,d;
printf("Enter the initial root:");
scanf("%f",&a);
printf("Enter the number of iteration");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
b=f(a);
c=df(a);
if(c==0)
printf("no  possible solution");
d=a-(b/c);
printf("The root in %d th iteration is %f",i,d);
a=d;}
return 0;}
