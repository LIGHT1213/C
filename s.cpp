#include<stdio.h>
int main()
{
  int hhe,mme,hhb,mmb;
  int a,b;
  scanf("%2d%2d",&hhb,&mmb);
  scanf("%2d%2d",&hhe,&mme);
  
  if(mme>mmb){
  b=mme-mmb;
  a=hhe-hhb;
  
  }
  else if(mme<mmb) {
  b=mme+60-mmb;
  a=hhe-1-hhb;
  }
  printf("%02d:%02d",a,b);
  return 0;
  
}
