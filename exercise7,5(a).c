#include<stdio.h>
int main(){
    float a[4][4];
for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%f",&a[i][j]);
        }
    }
    printf("roll\t  stu1\t stu2\t stu3\n");
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%f ",a[i][j]);
        }printf("\n");
    }
    int sum=0;
  for(int i=0;i<4;i++,sum=0){
    for(int j=1;j<4;j++){
        sum=sum+a[i][j];
    }printf("%d\n",sum);
  }return 0;}
