#include<stdio.h>
int main(){
    int row,col;
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<a[i][j]){
                max=a[i][j];
                row=i;col=j;}
        }
    }
    printf("%d %d %d",max,row,col);
return 0;}
