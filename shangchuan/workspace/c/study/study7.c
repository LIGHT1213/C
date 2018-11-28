#include<stdio.h>
int wai(int a){

int b,c=1;

for(b=1;b<=a;b++){
	c=c*b;



}

return c;


}

int main()
{
int x,y;
scanf("%d",&x);
for(y=1;y<=x;y++){

	printf("%d!=%d\n",y,wai(y));


}

return 0;



}

