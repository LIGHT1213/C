#include<stdio.h>
#include<math.h>
int main()
{
	int n, m, i, p, q;
	scanf("%d", &n);
	for(i=2;i<=n/2;i++){
		for(m=2;m<=sqrt(i);m++){
			if(i%m==0)
			break;
		}
		if(m>sqrt(i)){
			q=n-i;
			for(m=2;m<=sqrt(q);m++){
				if(q%m==0)
				break;
			}
			if(m>sqrt(q)){
				p=i;
				printf("%d = %d + %d", n, p, q);
				break;
			}
	}
		
	}
	return 0;
	
}

