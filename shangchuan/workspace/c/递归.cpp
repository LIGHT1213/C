#include<stdio.h>
void printN(int N);
int main(){
	int N ;
	scanf("%d",&N);
	printN(N); 
	
	
	
	
} 
void printN(int N){
	
	printN(N-1);
	printf("%d",N);
	
	
	
}
