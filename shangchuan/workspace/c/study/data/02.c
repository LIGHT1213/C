#include<stdio.h>
void inputArr(int a)
{
int k[a],l,b,i,j,find;
for(l=1;l<=a;l++){
scanf("%d",&k[l]);


}

for(i=a;i>=0;i--){
	for(j=0;j<=i;j++){
		if(k[j]>k[j+1]){
		int temp;
		temp=k[i];
		k[i]=k[j];
		k[j]=temp;
	}
	}
}



scanf("%d",&b);
find=a;
while(find!=0){
	if(b==k[find]){
		printf("%d",b); 
		break;

} 
	else if(b>k[find]){
		find=(a+find)/2; 
}
	else find=(0+find)/2;


}

if(find==0) printf("0");
}


int main()
{
int lenArr,i;
scanf("%d",&lenArr);
inputArr(lenArr);
return 0;



}
             
