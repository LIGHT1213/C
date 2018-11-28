   #include <stdio.h>  
      
    int main(){  
        int n,cnt=0;  
        double distence,h;  
      
        scanf("%lf %d", &h, &n);  
      if(n!=0){
        distence = h;  
        cnt=1;  
        do{  
            h=0.5*h;
            distence += 2*h;
            cnt++;  
        }while(cnt<n);
      
        h=0.5*h;
        printf("%.1f %.1f\n", distence, h);  
      }
   else printf("0.0 0.0");
        return 0;  
    }  
