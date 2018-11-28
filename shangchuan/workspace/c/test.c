#include<stdio.h>

int main()
{
int sum = 0;
int x = 1;
int n = 1;
do{

	sum += x;
	x=x*2;
	n+=1;



} while(n<20);


printf("%d\n",sum);
return 0;


}
