#include<stdio.h>
double fact(int a)
{
int b,c=1;
for(b=1;b<=a;b++){
	c=c*b;



}
return c;



}






int main() 
{

int m,n;
scanf("%d%d",&m,&n);
if(m<n) printf("plsease input right word!\n");
else printf("%.2f\n",fact(m)/fact(n)*fact(m-n));




}
