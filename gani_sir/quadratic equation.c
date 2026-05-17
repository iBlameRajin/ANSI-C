#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,s1,s2;
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-(4*a*c);
    if(d>0){
        s1=(-b+sqrt(d))/(2*a);
         s2=(-b-sqrt(d))/(2*a);
         printf("%f %f",s1,s2);}
         else if(d==0){
            s1=s2=-b/(2*a);
            printf("%f %f",s1,s2);
         }
         else{
         float D=sqrt(-d)/(2*a);
         float e=-b/(2*a);
         printf("%.2f+%.2fi %.2f-%.2fi",e,D,e,D);}

    return 0;}

