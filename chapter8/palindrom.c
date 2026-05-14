#include<stdio.h>
#include<string.h>
int main(){
  char str[10];
  char rev[10];
  printf("Enter the string");
  scanf("%s",str);
  int n=strlen(str);
  for(int i=n-1,j=0;i>=0;i--,j++){
    rev[j]=str[i];
  }
  rev[n]=0;
  if(strcmp(rev,str)==0)
        printf("palindrom");
  else
    printf("not palindrom");
return 0;}

