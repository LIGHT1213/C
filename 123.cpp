#include <stdio.h>
int main()
{
	int a,b,c;
	c=b;
	printf("%d\n%d",b,c);  
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	scanf("%d",&b);
	if(b<c)
	c=b;
	}
	printf("%d",c);
} 
