int search( int n ){
	int a,b,c,cnt=0,i,t;
	double m;
	
		for(i=101;i<=n;i++){
			a=i%10;
			b=(i/10)%10;
			c=i/100;
			t=sqrt(i);
			m=sqrt(i);
			if(a==b||a==c||b==c){
			if(t==m){
				cnt++;
			}
		}
		}
	
	return cnt;
}
