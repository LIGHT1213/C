#include<stdio.h>
int main()
{
int a,b=0;

scanf("%d",&a);

while(a!=1)
{
if(a % 2 != 0) 
{
	a=(3*a+1)*0.5;
	b++;
}
else 
{
	a=0.5*a;
	b++;
}
}
printf("%d\n",b);
return 0;



}
