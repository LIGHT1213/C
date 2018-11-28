void dectobin( int n ){  
    int r=0,m=1,i,t;  
  
    t = n;  
    while(t){  
        i = t % 2;  
        r = m * i + r;  
        m = m*10;  
        t = t/2;  
    }  
  
    printf("%d\n", r);  
}  
