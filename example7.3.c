#include<stdio.h>
#include<string.h>

int main(){
char n[100];
    scanf("%s",n);
    int l=strlen(n);
    int j=l-1;
    while(n[j]!='1'){
        j--;
    }
    int i=j-1;
    while(i>=0){
        if(n[i]=='1')
            n[i]='0';
        else
            n[i]='1';
    i--;}
 for(int i=0;i<l;i++)
    printf("%c",n[i]);

return 0;}
