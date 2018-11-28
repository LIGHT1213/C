#include<stdio.h>
#include<math.h>
int pd(int n) {  
    int i, limit, flag = 1;  
    if(n <= 1)  
        flag = 0;  
    else if(n == 2)  
        flag = 1;  
    else if(n % 2 == 0)  
        flag = 0;  
    else {  
        limit = sqrt(n) + 1;  
        for(i = 3; i <= limit; i += 2) {  
            if(n % i == 0) {  
                flag = 0;  
                break;  
            }  
        }  
    }  
    return flag;  
}  
int main() {  
    int i, n;  
    scanf("%d", &n);  
    for(i = 2; i < n; i++) {  
        if(pd(i) && pd(n - i)) {  
            printf("%d = %d + %d", n, i, n - i);  
            break;  
        }  
    }  
    return 0;  
}   
