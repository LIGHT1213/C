int f( int n )
{
	int fe=0;
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else if(n==2){
		fe++;
		
	}
	else if(n==3){
		fe+=2;
	}
	else{
		fe=f(n-1)+f(n-2);
	}
	return fe;
}
