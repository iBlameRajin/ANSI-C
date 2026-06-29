#include<stdio.h>
int main(){
    char a[30],ch;
    char *start,*end;
    printf("Enter the string\n");
    gets(a);
    end=a;
    while(*end!=0)
        end++;
    end--;
    start=a;
    for(;start<end;end--,start++){
        ch=*start;
        *start=*end;
        *end=ch;
    }
    printf("%s",a);
return 0;}
