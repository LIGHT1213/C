#include<stdio.h>
int main(){
	char c[81];
	int i=1;
	do{
		i++;
		c[i]=getchar();
		
	}while(c[i]!='\n');
	for(int j=i-1;j>1;j--){
		printf("%c",c[j]);
	}
}
