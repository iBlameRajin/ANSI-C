#include<stdio.h>
int main(){
    int a[3][3]; int r1=3;
    int r2=3;
    int c2=3;
    int b[3][3];
    int c[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){//you can put c1 also//
            for(int k=0;k<c2;k++){
                 c[i][j]+=a[i][k]*b[k][j];
            }printf("%d",c[i][j]);
        }printf("\n");
    }
return 0;}
