#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(islower(a))
        putchar(toupper(a));
    else
        putchar(tolower(a));
return 0;}
