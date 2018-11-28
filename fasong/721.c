#include<stdio.h>
void cul(int m,int n);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	cul(m,n);
	
}
void cul(int m,int n){
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		
		}	
	}
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=arr[i][j];
			
		}
		printf("%d\n",sum);
	}
	
}
