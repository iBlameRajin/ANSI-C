#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
case 1:
    printf("weekday sunday");break;
   case 2:
    printf("weekday monday");break;
    case 3:
    printf("weekday tuesday");break;
    case 4:
    printf("weekday wednesday");break;
    case 5:
    printf("weekday thrusday");break;
    case 6:
    printf("weekend friday");break;
    case 7:
    printf("weekend saturday");break;
    default:
        printf("invalid input");
     }
return 0;}
