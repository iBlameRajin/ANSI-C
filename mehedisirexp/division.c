#include<stdio.h>
int main(){
    char a1[10]=")";
    char b1[10]="(";
    char b2[10]="-----";
int a,b,c,d,e;
printf("Enter 2 digit dividned and one digit divisor:");
scanf("%d %d",&a,&b);
c=a/b;
d=a%b;
e=(b*c);
printf("%20d%s%d%s%d\n",b,a1,a,b1,c);
printf("%23d\n",e);
printf("%23s\n",b2);
printf("%23d",d);
}
