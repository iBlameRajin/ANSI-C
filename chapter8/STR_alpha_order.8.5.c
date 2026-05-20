#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char temp;
    gets(str);
    int b=strlen(str);
    for(int i=0;i<b-1;i++){
        for(int j=0;j<b-i-1;j++){
            if(str[j]>str[j+1]){
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;}

            }
        }
    printf("%s",str);
return 0;}
