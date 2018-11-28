#include<stdio.h>
#include<math.h>
int main(void)
{
int ri,f;
double x,y;
scanf("%d",&f);
for(ri=1;ri<f;ri++){
	scanf("%lf",&x);
	if(x>=0) y=sqrt(x);
	
	
	else y=pow((x+1),2)+2*x+1/x;	
	
	
	
	printf("y=%.2f\n",y);

}
}





