#include<stdio.h>
#include<string.h>
int main(){
char a[100];
gets(a);
char b[100];
gets(b);
int i=0;
while(b[i]!='\0'){
    a[i]=b[i];
i++;}
a[i]='\0';
puts(a);
return 0;}
