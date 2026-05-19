#include<stdio.h>
int main(){
char a[100];
gets(a);
int i=0;
while(a[i]!=0)
i++;
printf("%d",i);
return 0;}
