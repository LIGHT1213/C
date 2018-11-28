#include<stdio.h>
int p;
void pr(int l);
int main(){
  int l=0,s;
  scanf("%d",&p);
  s=p;
  while(s!=0){
    l++;
    s=p/10;
  }
  pr(l);
  return 0;
}
void pr(int l){
  int arr[l];
  for(int i=0;i<l;i++){
    arr[i]=p % 10;
    
  }
  for(int i=l-1;i>=0;i--){
    if(i!=0)
    printf("%d",arr[i]);
    else 
    printf("%d ",arr[i]);
  }
}
