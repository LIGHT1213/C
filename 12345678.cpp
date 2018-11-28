#include<stdio.h>  
#include<math.h>  
int p(int m,int n);

int main(){  
    int n;   
    scanf("%d",&n);  
    int  t=0;  
    int t1=p(10,n-1);
     int t2=p(10,n);
    for(t=t1;t<t2;t++){
        int b=t;                     
        int sum=0,a=0,i; 
        for(i=1;i<=n;i++){  
        a=b%10;                 
        b/=10;                  
        sum+=p(a,n);  
    }  
        if(sum==t)   
        {  
            printf("%d\n",t);  
        }     
          
    }  
      
      
    return 0;  
}
int p(int m,int n){
  int sum=1;
  for(int i=1;i<=n;i++){
    sum*=m;
  }
  return sum;
}
