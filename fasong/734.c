#include<stdio.h>
int main(){
	char c[81];
	int i=0,j;
	while(c[i-1]!='\n'){
		c[i]=getchar();
		i++;
	}
		for(j=0;j<i;j++){
			if(c[j]>='A'&&c[j]<='Z')
			c[j]=155-c[j];
			putchar(c[j]);
		}
	}
