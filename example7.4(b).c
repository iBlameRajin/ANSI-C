#include<stdio.h>
int main(){

    int a[4][3];
    for( int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum;
   for(int n=0;n<3;n++,sum=0){
    for(int m=0;m<4;m++){
        sum=sum+a[m][n];

    } printf("The total sale of the item%d is %d\n",n+1,sum);
   }
return 0;}
