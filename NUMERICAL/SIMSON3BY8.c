#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)+2*x+1
int main(){
  float a,b,h,x,sum;
  int n;
  printf("Enter the upper and lower limit");
  scanf("%f %f",&b,&a);
  printf("Enter the number of  sub interval multiple of 3");
  scanf("%d",&n);
  h=(b-a)/n;
  sum=0;
  sum=f(a)+f(b);
  for(int i=1;i<n;i++){
    x=a+i*h;
    if(i%3==0)
        sum+=2*f(x);
    else
        sum+=3*f(x);
  }
  printf("the result is %f",(3*h*sum)/8);
return 0;}
