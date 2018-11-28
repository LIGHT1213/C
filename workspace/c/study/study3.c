#include<stdio.h>
#include<math.h>
int main()
{
int f,ri;
int flag=2;
double x,y;
scanf("%d",&ri);

for(f=1;f<=ri;f=f+3){
		y=y+pow(-1,flag)*1/f;
		flag=flag+1;

}

printf("%lf\n",y);




}
