#include<stdio.h>

int main()
{

  int arr[10],i,k;
  double sum, ave;
  printf("enter 10 integers:");
  
  for(i=0; i<=9; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  ave=sum/10;

  for(k=0;k<=9;k++)
  {
    if(arr[k]>ave) printf("%d\n",arr[k]);
  }
  return 0;
}
