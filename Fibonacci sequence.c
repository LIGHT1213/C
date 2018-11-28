#include<stdio.h>
void fs(int n)
{
int a1=1,a2=1,i,k,fib[n];
fib[1]=a1;
fib[2]=a2;
for(i=3;i<=n;i++){
fib[i]=fib[i-1]+fib[i-2];


}


for(k=1;k<=n;k++){
printf("%d\n",fib[k]);


}

}




int main(){

int n;
printf("Enter a number:");
scanf("%d",&n);
fs(n);
return 0;





}
