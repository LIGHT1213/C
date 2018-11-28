#include<stdio.h>
void cul(int m);
int main(){
	int m;
	scanf("%d",&m);
	cul(m);
}
void cul(int m){
	int arr[m][m];
	int sum=0,i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			if(i!=m-1&&j!=m-1&&i+j!=m-1){
				sum+=arr[i][j];
			}
		}
	}
	printf("%d",sum);
}
