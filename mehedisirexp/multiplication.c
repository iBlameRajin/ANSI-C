#include<stdio.h>
int main(){
char multi[15]="X";
char line[10]="-----";
int a,b,c,d,e,f,g;
printf("Enter 2 two digit number");
scanf("%d %d",&a,&b);
c=b%10;
d=b/10;
e=c*a;
f=d*a*10;
g=e+f;
printf("%20d\n",a);
printf("%15s%5d\n",multi,b);
printf("%20s\n",line);
printf("%20d\n",e);
printf("%20d\n",f);
printf("%20s\n",line);
printf("result :%12d",g);

return 0;}
