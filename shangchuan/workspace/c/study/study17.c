#include<stdio.h>
void c(int x)
{
int i;
double t=0;
double a=2,b=1,temp;

for(i=1;i<=x;i++){
t=t+a/b;
temp=a;

a=a+b;
b=temp;
}
printf("%.2f\n",t);
}
int main()
{

int n;
scanf("%d",&n);
c(n);
return 0;





}
