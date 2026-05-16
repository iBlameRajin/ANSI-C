#include<stdio.h>
int main(){
char a[10];
char b[10];
gets(a);
gets(b);
int i=0;
while(a[i]==b[i])
    i++;
  int c=(int)a[i];
  int d=(int)b[i];
    printf("%d",c-d);
}
