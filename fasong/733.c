#include<stdio.h>
int main(){
	char c[81];
	int i=0,j,cnt=0;
	while(c[i-1]!='\n'){
		c[i]=getchar();
		i++;
	}
	for(j=0;j<i;j++){
		if(c[j]>='A'&&c[j]<='Z'){
			if(c[j]!='A'&&c[j]!='E'&&c[j]!='I'&&c[j]!='O'&&c[j]!='U'){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
}
