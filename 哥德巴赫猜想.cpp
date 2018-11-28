#include<stdio.h>

int pd(int n);
int main(){
  int s1,s2;
  int h;
  scanf("%d",&h);
  for(int i=2;i<=h;i++){
    int temp;
    if(pd(i)==1){
      temp=h-i;
        if(pd(temp)==1){
          s1=i;
          s2=temp;
            printf("%d = %d + %d",h,s1,s2);
			break;
        }
    }
  }

  return 0;
}
int pd(int n){
 int i;
 for(i=2;i<=n;i=i+2){
if(n%i==0){
break;	
}
}
 if(i==n) return 1; 
}
