#include<stdio.h>
#include<math.h>
int main(){

for(int n=0;n<=180;n=n+15){
float s=n*3.1416/180;
printf("sin(%f) =%f\n",s,sin(s));}

return 0;}
