#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the three side of the triangle");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c)
            printf("the triangle is equilataral");
        else if(a==b || b==c || c==a)
            printf("The triangle is isoscales");
        else
            printf("The triangle is scalane");
    }
    else
        printf("no triangle is possible");
return 0;}
