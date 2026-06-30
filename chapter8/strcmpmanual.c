#include<stdio.h>
int main(){
char a[10];
char b[10];
gets(a);
gets(b);
int i=0;
while(a[i]!=0 && a[i]==b[i])
    i++;
  printf("%d",a[i]-b[i]);
}
