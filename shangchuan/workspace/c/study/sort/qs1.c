#include<stdio.h>
void sort(int *a, int left, int right)
{
 if(left >= right){
	 return ;
}
int i = left;
int j = right;
int key = a[left];
			     
while(i < j) {
while(i < j && key <= a[j]) {
j--;
}
							         
 a[i] = a[j];
								         
while(i < j && key >= a[i])
{
i++;
 }
									         
a[j] = a[i];
										    }
			         
a[i] = key;
sort(a, left, i - 1);
sort(a, i + 1, right);
}


int main()
{
	int b[100];
	int i,j,k,n,a;
	printf("please input the length of array(less than 100):");
	        scanf("%d",&n);
		printf("please input an array:");
		for(k=0;k<=n;k++){
			        scanf("%d",&b[k]);
		}

		sort(b,0,n);

		for(a = 0;a <= n; a++){
			        printf("the answer is:%d\n",b[a]);
		}




}

