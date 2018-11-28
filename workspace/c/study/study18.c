#include<stdio.h>
#include<math.h>
int main()
{

int a,b,i,c=0;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
c+=a;
a+=a*pow(10,i);


}


printf("%d",c);



}
