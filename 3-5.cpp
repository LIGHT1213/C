#include<stdio.h>
void inputarr(int j)
{
int i,arr[j];
int a=0,b=0,c=0,d=0,e=0;
for(i=1;i<=j;i++){
	scanf("%d",&arr[i]);
	if(arr[i]>=90) a++;	
	else if(arr[i]>=80&&arr[i]<90) b++;
	else if(arr[i]>=70&&arr[i]<80) c++;
	else if(arr[i]>=60&&arr[i]<70) d++;
	else if(arr[i]<60) e++;





}
	
	printf("%d %d %d %d %d",a,b,c,d,e);
	
	
}


int main()
{
	int j;
	scanf("%d",&j);
	inputarr(j);
	return 0;
	
	
	
}
