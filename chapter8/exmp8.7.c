#include<stdio.h>
int main(){
    char a;
    for(int i=65;i<=122 ;i++){
            if(i>90 && i<97)
            continue;
        printf("%d-%c\n",i,i);
    }
return 0;}
