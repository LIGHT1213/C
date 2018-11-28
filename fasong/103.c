double calc_pow( double x, int n ){
	double m=1;
	if(n==1){
		m*=x;
	}
	else{
		m=x*calc_pow( x, n-1 );
	}
	return m;
}
