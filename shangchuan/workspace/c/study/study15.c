#include<stdio.h>
void c(int a)
{
int arr[a],i,max=0;
for(i=1;i<=a;i++){
scanf("%d",&arr[i]);
if(arr[i]>max) max=arr[i];

}
printf("%d",max);

}

int main()
{
int a;
scanf("%d",&a);
c(a);




}
