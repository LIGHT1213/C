#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	if(a%5==0) printf("Drying in day %d",a);
	else if(a % 5!=0){
	b= a % 5;
	if(b>3&&b<=5) printf("Drying in day %d",a);
	else if(b<=3&&b>0) printf("Fishing in day %d",a);}
	return 0;
	
	
	
	
	
	
	
}

