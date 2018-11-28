#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		for(int j=0;j<i;i++){
			printf("%c",'A'+count);
			count++;
		}
		
	}
	
	
	return 0;
	
} 
