#include<stdio.h>
#define n 10
int main(){
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(a[j-1]>a[j]){
                int b=a[j];
                a[j]=a[j-1];
                a[j-1]=b;
            }
        }
    }
    /*
for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
        if(a[j] > a[j+1]) {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}*/
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
return 0;}
