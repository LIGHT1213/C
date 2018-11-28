#include<stdio.h>
int main(){
  int i=1,sum;
  while(i>0) {
    scanf("%d",&i);
    if(i %2 !=0&&i>0)
    {
      sum+=i;
    }
    
  }
  printf("%d",sum);
  return 0;
}
