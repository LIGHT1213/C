#include<stdio.h>
int main(){
  int a,b,sum,i;
  scanf("%d",&a);
  while(a!=0){
    i=a%10;
    a=a/10;
    sum+=i;
    b++;
  }
  printf("%d %d",b,sum);
  return 0;
}
