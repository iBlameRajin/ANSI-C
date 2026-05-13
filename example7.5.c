#include<stdio.h>
#define row 5
#define coloums 5
int main(){
  for(int i=1;i<=coloums;i++){
    printf("%4d",i);
  }
  printf("\n");
  for(int j=1;j<=row;j++){
    printf("%2d|",j);
    for(int k=1;k<=coloums;k++){
        printf("%4d",j*k);
    }printf("\n");
  }
return 0;}
