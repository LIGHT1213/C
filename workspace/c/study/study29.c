#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x ){  
  
    double A=1,B=1,C=1,sum=1;  
    int i,J;  
  
    J=-1;  
  
    for(i=2;A>e;i+=2){  
        B = B*x*x;  
        C = C*i*(i-1);  
        sum = sum + J*B/C;  
        A=B/C;  
        J=-J;  
    }  
  
    return sum;  
  
}  
