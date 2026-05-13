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
   for( int i=j-1;i>=0;i--){
    if(n[i]=='1')
        n[i]='0';
    else
        n[i]='1';
   }
   printf("%s",n);

return 0;}
