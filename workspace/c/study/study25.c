#include <stdio.h>

int is( int number );
void count_sum( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}
int is( int number )

{
    int a,b,c,d;
    a=number%10;
    b=(number/10)%10;
    c=(number/100)%10;
    d=number/1000;
    if(a+b+c+d==5) return 1;
    else return 0;

}
void count_sum( int a, int b ){
int i,c=0,sum=0;
for(i=a;i<=b;i++){
    if(is(i)) {
        c++;
        sum+=i;
    }
}
printf("count = %d, sum = %d",c,sum);



}