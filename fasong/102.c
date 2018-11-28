double fact( int n ){
	double k=1;
	int i;
	//int t=0;
	if(n==0){
		return 1;
	}
	else {
		for(i=1;i<=n;i++){
			k*=i;
			//t++;
			
		}
		//printf("%d",t);
		
	}
	return k;
}
double factsum( int n ){
	double sum=0;
	int i;
	if(n==0){
		return 0;
	}
	else{
		for(i=1;i<=n;i++){
			sum+=fact(i);
		}
		return sum;
	}
}
