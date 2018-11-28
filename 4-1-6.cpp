#include<stdio.h>
int main(){
  double z=2,x=1,a,i,sum=0,p;
  scanf("%lf",&a);
  for(i=1;i<=a;i++){
    p=1.0*z/x;
    sum+=p;
    double temp;
    temp=z;
    z=z+x;
    x=temp;
  }
  printf("%.2f",sum);
  return 0;
}
