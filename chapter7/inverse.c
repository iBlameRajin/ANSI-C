#include<stdio.h>
int main(){
    float a[3][3];
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%f",&a[i][j]);
        }
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%f ",a[i][j]);
        }printf("\n");
    }
    float det=0.0;
for(int i=0;i<3;i++){
    det+=a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%.2f\t",((a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-
                     a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3])/det));
    }printf("\n");
}
return 0;}
