int ArrayShift( int a[], int n, int m ){
	int t,i,l=0;
	int arr[100];
	t = m%n;
	
	for(i=n-1;i>n-1-t;i--){
		arr[l]=a[i];
		l++;
	}
	for(i=n-t-1;i>=0;i--){
		a[i+t]=a[i];
	}
	for(i=0;i<t;i++){
		a[i]=arr[l-1];
		l--;
	}
}
