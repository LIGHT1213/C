#include<stdio.h>
int main()
{
	int a,b;
	double t;
	scanf("%d%d",&a,&b);
	t=100.00*(a-b)/b;
	if(t<10) printf("OK");
	else if(t>=10&&t<20) printf("Exceed %.0f%%. Ticket 200",t);
	else if(t>=20) printf("Exceed %.0f%%. License Revoked",t);
	
	
	
	
	
	
	
 } 
