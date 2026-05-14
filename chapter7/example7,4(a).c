#include<stdio.h>
int main(){

    int a[4][3];
    for( int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
   for(int m=0;m<4;m++,sum=0){
    for(int n=0;n<3;n++){
        sum=sum+a[m][n];

    } printf("The total sale of the girl%d is %d\n",m+1,sum);
   }
return 0;}
