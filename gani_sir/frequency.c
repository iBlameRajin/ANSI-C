#include<stdio.h>
#include<math.h>
int main(){
  float c,l,r,freq,value;
  l=1.0;
  r=0.1;
      printf("capacitance\t frequency\n");
  for(c=0.01;c<=0.1;c+=0.01){

    value=(1.00/(l*c))-(r*r/(4*c*c));
    freq=sqrt(value);
    printf("%f \t\t %f\n",c,freq);
  }
return 0;
}
