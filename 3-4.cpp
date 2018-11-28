#include<stdio.h>
int main()
{
double a,b;
scanf("%lf",&a);
if(a<=1600) b=a;
else if(a>1600&&a<=2500) b=(a-1600) *0.05;
else if(a>2500&&a<=3500) b=(a-1600) *0.10;
else if(a>3500&&a<=4500) b=(a-1600) *0.15;
else if(a>4500) b=(a-1600) *0.2;
printf("%.2f",b);





 } 
