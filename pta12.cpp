#include<stdio.h>
#include<math.h> 
int main()
{
	int m, n, i, a, b, c, count;
	count=0;
	scanf("%d %d", &m, &n);
	for(i=m;i<=n;i++){
		b=0;
		if(i==1){
			printf("1 = 1\n");
			count++;
		}
		for(a=1;a<i;a++){
			if(i%a==0){
				b=b+a;
			}
			if(a==i-1){
			if(b==i){
				printf("%d = 1", b);
				for(c=2;c<b;c++){
					if(b%c==0){
					printf(" + %d", c);
				}
				}
				printf("\n");
				count++;
			}
		}
		}
	}
	if(count==0){
		printf("None");
	}
	return 0;
}
