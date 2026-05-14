#include<stdio.h>
int main(){
    int group[11]={0};
   int mark;
   for(int i=0;i<50;i++){
    scanf("%d",&mark);
    group[mark/10]++;
   }
   for(int j=0;j<10;j++){
    printf("%d to %d frequency is %d\n",j*10,((j*10)+9),group[j]);
   }
   printf("100 to 100 is %d",group[10]);
return 0;}
