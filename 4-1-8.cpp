#include <stdio.h>  
#include <math.h>  
  
  
int main(){  
    int i=1,a=1;  
    double sum=0,t,n;  
  
    scanf("%lf",&n);  

  
    do{  
        t=a*1.0/(3*i-2);  

        sum+=t;  
        a=-a;  
        i++;  
    }while(fabs(t)>n);  
  
    printf("sum = %.6f", sum);  
  
  
    return 0;  
}  
