int Ack( int m, int n )
{
	long ack=0;
	if(m==0){
		ack=n+1;
		
	}	
	else if(n==0&&m>0){
		ack+=Ack(m-1,1);
	}
	else if(n>0&&m>0){
		ack+=Ack(m-1,Ack(m,n-1));
	}
	return ack;
}
