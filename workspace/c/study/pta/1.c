#include<stdio.h>  
#include<math.h>  
int main(){  
    long n;   
    scanf("%d",&n);  
    long  t=0;  
    for(t=pow(10,n-1);t<(pow(10,n));t++){
        long b=t;                     
        long sum=0,a=0,i; 
        for(i=1;i<=n;i++){  
        a=b%10;                 
        b/=10;                  
        sum+=pow(a,n);  
    }  
        if(sum==t)   
        {  
            printf("%d\n",t);  
        }     
          
    }  
      
      
    return 0;  
}