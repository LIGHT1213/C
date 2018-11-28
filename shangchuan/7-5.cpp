#include<stdio.h>
#include<string.h>
int cul(int t);
int main(){
	int t,i,m;
	int f[100];
	memset(f,-1,sizeof(f));
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&m);
		f[i]=cul(m);
		
	}
	for(i=1;i<=t;i++){
		if(f[i]==1){
			printf("YES\n");
		}
		else if(f[i]==0){
			printf("NO\n");
		}
	}
}
int cul(int t){
	int arr[10][10];
	int flag=0,x=0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
		scanf("%d",&arr[i][j]);
		
		}
	}
		for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
		if(i>j&&arr[i][j]==0){
			flag++;
		}
		
	}

}
for(int i=1;i<t;i++){
	x+=i;
}
if(flag==x){
	return 1;
}
else{
	return 0;
}
}
