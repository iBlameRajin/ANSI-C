#include<stdio.h>
#include<math.h>
int main(){
    float x;
    char T;
    printf("Enter the angle in radian:");
    scanf("%f",&x);
    printf("Enter the character");
    scanf(" %c",&T);
    switch(T){
case 's':
case 'S':
    printf("sin(%f)=%f",x,sin(x));
    break;
case 'C':
case 'c':
    printf("cos(%f)=%f",x,cos(x));
    break;
case 't':
case 'T':
    printf("tan(%f)=%f",x,tan(x));
    break;
    default:
    printf("Invalid output");}
return 0;}
