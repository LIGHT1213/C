#include<stdio.h>
void cul(int m,int n);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	cul(m,n);
	
}
void cul(int m,int n){
	int arr[m][n];
	int flag=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
		for(int i=0;i<m;i++){
	
			for(int j=0;j<n;j++){
			if(j!=0&&j!=n-1&&i!=0&&i!=m-1){
				if(arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]&&arr[i][j]>arr[i+1][j]&&arr[i][j]>arr[i-1][j]){
					printf("%d %d %d\n",arr[i][j],i+1,j+1);
					flag++;
				}
			}
			
		}
		
	}

	
		
	if(flag==0){
		printf("None %d %d",m,n);
	}		
	}	

