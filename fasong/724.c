#include<stdio.h>
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int n,y,r,i;
	int sum=0;
	scanf("%d/%d/%d",&n,&y,&r);
	for(i=0;i<y;i++){
		sum+=days[i];
		
	}
	if(n%4==0&&n%100!=0||n%400==0){
		if(y>2){
			sum++;
		}
	}
	printf("%d",sum+r);
	
}
