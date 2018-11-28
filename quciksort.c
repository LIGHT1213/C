#include<stdio.h>
void quicksort(int *b, int low, int high)
{
if(low >= high){
	return ;
}

int left = low;
int right = high;
int key = b[low];
while(left<right)
{
	while(left < right && key <= b[right])
	{
		right--;
	
	}
	b[left]=b[right];
	while(left < right && key >= b[left])
	{
	
		left++;
	
	}
	b[right] = b[left];



}

b[left] = key;
quicksort(b, low, left-1);
quicksort(b, left+1, high);



}


int main()
{
int b[20000];
int i,j,k,n,a;
printf("please input the length of array(less than 20000):");
	scanf("%d",&n);
printf("please input an array:");
for(k=0;k<=n;k++)
{
	scanf("%d",&b[k]);
}

quicksort(b,0,n);
printf("the answer is:\n");
for(a = 0;a <= n; a++)
{
	printf("%d\n",b[a]);
}




}
