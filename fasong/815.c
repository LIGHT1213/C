int search( int list[], int n, int x ){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(list[i]==x){
			flag=1;
			return i;
		}
		
	}
	if(flag==0){
		return -1;
	}
}
