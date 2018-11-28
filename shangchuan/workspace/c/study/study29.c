#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    printf("%dt\n",narcissistic(n));  //0100 0000
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number ){
	int cnt=0,temp,sum=0,fact=1;
	int a=number,b=number;
	while(a!=0){
		
		a/=10;
		cnt++;	
	}
	while(number!=0){
		temp=number % 10;
		for(int i=1;i<=cnt;i++){
			fact*=temp;
			
		}
		
		sum+=fact;
		fact=1;
		number/=10;
	}
	
	if(sum==b){
	return 1;
	}	
	
}
void PrintN( int m, int n )
{
	int i;
	for(i=m+1;i<n;i++){
	if(narcissistic(i)==1){
		printf("%d\n",i);
	}
	
	}

	
	
}