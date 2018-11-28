#include<stdio.h>
void find(char att);
int main(){
	char c[81],att;
	int i=0,j,flag=-1;
	scanf("%c\n",&att);
	find(att);


}
void find(char att){
	int i=1,flag=-1,j;
	char c[81];
	c[0]='0';
	while(c[i-1]!='\n'){
		
		c[i]=getchar();
		i++;
	}
	
	for(j=0;j<=i;j++){
		if(att==c[j]){
			flag=j;
		}
	}
	if(flag==-1){
		printf("Not Found");
	}
	else{
		printf("index = %d",flag-1);
	}
}

