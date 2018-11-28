#include<stdio.h>
int main(){
	int i=1,flag=-1,j,cnt=0;
	char c[81],att;
	c[0]='0';
	while(c[i-1]!='\n'){
		
		c[i]=getchar();
		i++;
	}
	scanf("%c",&att);
	for(j=0;j<i;j++){
		if(att==c[j]){
			cnt++;
		}
	}

		printf("%d",cnt);

}
