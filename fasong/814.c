void sort( int a[], int n ){
	int temp,k,i,m;
	for(k=0;k<n-1;k++){
		m=k;
		for(i=k+1;i<n;i++)
			if(a[i]<a[m])
				m=i;
			
			temp=a[m];
			a[m]=a[k];
			a[k]=temp;
		
	}
}
