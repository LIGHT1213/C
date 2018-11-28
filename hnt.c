#include<stdio.h>
void move(int n,char a,char b,char c)
{
	
	if(n==1)
		
		printf("%c-->%c\n",a,c); 
	
	
	

	else{
		move(n-1,a,c,b);
		printf("%c-->%c\n",a,c);
		move(n-1,b,a,c);
	}
}


int main()
{
	int n;
	printf("please enter the number of Hanoi :");
	scanf("%d",&n);
	if (n==0){
		printf("the number can't be zero\n");
	}
	else{
		move(n,'A','B','C');
	}



}
