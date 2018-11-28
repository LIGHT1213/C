#include<stdio.h>
int main(){
char c[81],num[81];
int i=0,j,k,number=0;
while(c[i-1]!='\n'){
	c[i]=getchar();
	i++;
}
k=0;
for(j=0;j<i;j++){
	if(c[j]>='0'&&c[j]<='9'){
		num[k]=c[j];
		k++;
				
	}
}
num[k]='\0';
if(k==1&&num[k-1]=='0'){
	putchar(num[k-1]);
}
for(i=0;num[i]!='\0';i++){
	if(number==0&&num[i]=='0'){
		number=0;
	}
	else if(number==0&&num[i]!='0'){
		printf("%c",num[i]);
		number=1;
	}
	else if(number!=0){
		printf("%c",num[i]);
	}
}
}
