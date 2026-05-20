#include<stdio.h>
int main(){
int n,m;
char a[100];
scanf("%s",a);
printf("Enter the starting position and the number of character you want to print");
scanf("%d %d",&n,&m);
printf("%.*s",m,a+(n-1));}
