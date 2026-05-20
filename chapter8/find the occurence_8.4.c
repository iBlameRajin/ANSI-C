#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[10];
    int count=0;
    char *ptr;
    printf("Enter the full text");
    gets(a);
    printf("Enter the word you want to find");
    scanf("%s",b);
    ptr=strstr(a,b);
   while(ptr!='\0'){
    count++;
    ptr=strstr(ptr+1,b);}
    printf("The word %s appears %d times",b,count);
return 0;}
