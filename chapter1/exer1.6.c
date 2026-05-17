#include<stdio.h>
#define pi 3.1416
int main(){
    int n;
   printf("Enter the number of multiplication table:");
   scanf("%d",&n);
   for(int i=1;i<=10;i++)
    printf("%d X %d = %d\n",n,i,i*n);
return 0;
}
