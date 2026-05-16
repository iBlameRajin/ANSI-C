#include<stdio.h>
#include<string.h>
int main(){
char a[100];
gets(a);
char b[100];
gets(b);
int i=0;
int j=0;
while(b[j]!='\0'){
    a[i]=b[j];
j++;i++;}
a[i]='\0';
puts(a);
return 0;}
