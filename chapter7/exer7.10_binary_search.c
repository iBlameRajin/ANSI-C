#include<stdio.h>
int binary(int arr[],int low,int high,int x){
   if(low>high)
return -1;
int mid=low+(high-low)/2;
if( arr[mid]==x){
return mid;}
if(arr[mid]>x){
return binary(arr,low,mid-1,x);}
if(arr[mid]<x){
return binary(arr,mid+1,high,x);
}
}


int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,43,64,754,75,467,33};
int x=64;
int n=sizeof(arr)/sizeof(arr[0]);
 int result=binary(arr,0,n-1,x);
 if(result==-1){
 printf("taarget is not here");}
 else
 printf("The index of target is %d",result);

return 0;}
