#include<stdio.h>
int main(){
	char c[81],hexad[81];
	int i=0,j,flag=1,k=0,number=0;
	while(c[i-1]!='#'){
	
		c[i]=getchar();	i++;
		
	}
		for(j=0;j<i;j++){
			if(c[j]>='A'&&c[j]<='F'||c[j]>='a'&&c[j]<='f'||c[j]>='0'&&c[j]<='9'){
				for(int m=j;m>=0;m--){
					if(c[m]=='-'){
						flag=-1;
						break;
					}
				}
				break;
			}
			
			
			
		}
		for(j=0;j<i;j++){
			if(c[j]>='A'&&c[j]<='F'||c[j]>='a'&&c[j]<='f'||c[j]>='0'&&c[j]<='9'){
				hexad[k]=c[j];
				k++;
			}
		}
		hexad[k]='\0';
		for(int t=0;hexad[t]!='\0';t++){
			if(hexad[t]>='0'&&hexad[t]<='9'){
				number=number*16+hexad[t]-'0';
				
			}
			else if(hexad[t]>='A'&&hexad[t]<='F'){
				number=number*16+hexad[t]-'A'+10;
			}
			else if(hexad[t]>='a'&&hexad[t]<='f'){
				number=number*16+hexad[t]-'a'+10;
			}
		}
		printf("%d",flag*number);
	}
