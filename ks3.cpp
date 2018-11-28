#include <stdio.h>
int yueshu(int a, int b);

int main()
{
    int i, j, minb, maxy;
    scanf("%d%d", &i, &j);
    
    maxy = yueshu(i, j);
    printf("%d %d", maxy,i*j/maxy);
}
int yueshu(int a,int b){
	int temp;
	while(b>0){
		temp= a%b;
		a=b;
		b=temp;
		
	}
	return a;
}
