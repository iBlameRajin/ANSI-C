#include<stdio.h>
#define pi 3.1416
int main(){
   float area,radius;
   printf("Enter the radius of the circle:");
   scanf("%f",&radius);
   area=pi*radius*radius;
   printf("The radius of the circle is %f",area);
return 0;
}
