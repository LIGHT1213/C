#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,k,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<c||a+c<b||c+b<a){
		printf("These sides do not correspond to a valid triangle");
		
	}
	else {
		t=(a+b+c)/2.0;
		s=sqrt(t*(t-a)*(t-b)*(t-c));
		k=(a+b+c)*1.00;
		printf("area = %.2f; perimeter = %.2f",s,k);
		
		
	}
	
	
	
	
	return 0;
	
	
}
