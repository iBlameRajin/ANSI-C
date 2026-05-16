#include<stdio.h>
#include<string.h>
int main(){
char a[100];
char b[100];
gets(a);
int i=0;

while(a[i]!='\0')
    i++;
    i--;
for(int j=0;j<i;j++,i--){
     c=a[i];
    a[i]=a[j];
    a[j]=c;
}

puts(a);}
