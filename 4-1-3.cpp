#include <stdio.h>
int main(void )
{
	int i,a1,min,n;
	scanf("%d",&n);
	min=a1;
	for(i=1;i<=n;i++){
		scanf("%d",&a1);
		if(min>a1)
		min=a1;
	}
	printf("min = %d\n",min);
	return 0;
}
