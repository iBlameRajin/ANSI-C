#include<stdio.h>
int main(){
    float temp;
    char tem;
    printf("Enter the temperature");
    scanf("%f",&temp);
    printf("if the temp is fahreignheight putf/F if celcius c/C");
    scanf(" %c",&tem);
    float F=((temp*9)/5)+32;
    float C=((temp-32)/9)*5;
    switch(tem){
case 'f':
case 'F':
    printf("The temperature in celcius is %f",C);break;
    case 'c':
case 'C':
    printf("The temperature in fahraignheight is %f",F);
    break;
default:
    printf("invalid input");}
return 0;}
