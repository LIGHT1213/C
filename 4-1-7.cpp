   #include<stdio.h>
   int main(){
   int a,t,n,i,sum;
    scanf("%d%d",&a,&n);
    sum=0,t=0;
    for(i=1;i<=n;i++){
        t=t*10+a;
        sum=sum+t;
    }
    printf("s = %d",sum);
   }
